/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSEDSIGNAL */
// system verilog for a 40x30 image debayering + qoi-format image encoder

typedef enum {
  Red,
  Blue,
  GreenBesideRed,
  GreenBesideBlue
} color_t;
typedef enum {
  Left,
  Center,
  Right
} lateral_t;
typedef enum {
  Top,
  Middle,
  Bottom
} vertical_t;

typedef struct packed {
  logic [7:0] r;
  logic [7:0] g;
  logic [7:0] b;
  logic [7:0] a;
} rgba_t;

module filter3x3 (
    input logic [7:0] pixels_in[1:-1][1:-1],  // row major
    input lateral_t lateral,
    input vertical_t vertical,
    input color_t color,
    output rgba_t pixel_out
);

  logic [7:0] pixels[1:-1][1:-1];

  edge_handler edge_handler (
      .pixels_in(pixels_in),
      .lateral(lateral),
      .vertical(vertical),
      .pixels_out(pixels)
  );


  // Overflow is probably definitiely an issue here
  always_comb
    case (color)
      Red: begin
        pixel_out.r = pixels[0][0];
        pixel_out.g = (pixels[0][1] + pixels[1][0] + pixels[-1][0] + pixels[0][-1]) / 4;
        pixel_out.b = (pixels[1][1] + pixels[1][-1] + pixels[-1][1] + pixels[-1][-1]) / 4;
      end
      Blue: begin
        pixel_out.r = (pixels[1][1] + pixels[1][-1] + pixels[-1][1] + pixels[-1][-1]) / 4;
        pixel_out.g = (pixels[0][1] + pixels[1][0] + pixels[-1][0] + pixels[0][-1]) / 4;
        pixel_out.b = pixels[0][0];
      end
      GreenBesideRed: begin
        pixel_out.r = (pixels[0][1] + pixels[0][-1]) / 2;
        pixel_out.g = pixels[0][0];
        pixel_out.b = (pixels[1][0] + pixels[-1][0]) / 2;
      end
      GreenBesideBlue: begin
        pixel_out.r = (pixels[1][0] + pixels[-1][0]) / 2;
        pixel_out.g = pixels[0][0];
        pixel_out.b = (pixels[0][1] + pixels[0][-1]) / 2;
      end
    endcase
  assign pixel_out.a = 8'hff;  // opaque
endmodule



module edge_handler (
    input logic [7:0] pixels_in[1:-1][1:-1],  // row major
    input lateral_t lateral,
    input vertical_t vertical,
    output logic [7:0] pixels_out[1:-1][1:-1]  // row major
);

  logic [7:0] horizontally_extended[1:-1][1:-1];

  // Mirror the image horizontally as necessary to fill edges
  always_comb
    case (lateral)
      Left: begin
        horizontally_extended = pixels_in;
        horizontally_extended[1][-1] = pixels_in[1][1];
        horizontally_extended[0][-1] = pixels_in[0][1];
        horizontally_extended[-1][-1] = pixels_in[-1][1];
      end
      Center: begin
        horizontally_extended = pixels_in;
      end
      Right: begin
        horizontally_extended = pixels_in;
        horizontally_extended[1][1] = pixels_in[1][-1];
        horizontally_extended[0][1] = pixels_in[0][-1];
        horizontally_extended[-1][1] = pixels_in[-1][-1];
      end
    endcase

  // Mirror the image vertically as necessary to fill edges
  always_comb
    case (vertical)
      Top: begin
        pixels_out = horizontally_extended;
        pixels_out[-1][-1] = horizontally_extended[1][-1];
        pixels_out[-1][0] = horizontally_extended[1][0];
        pixels_out[-1][1] = horizontally_extended[1][1];
      end
      Center: begin
        pixels_out = horizontally_extended;
      end
      Bottom: begin
        pixels_out = horizontally_extended;
        pixels_out[1][-1] = horizontally_extended[-1][-1];
        pixels_out[1][0] = horizontally_extended[-1][0];
        pixels_out[1][1] = horizontally_extended[-1][1];
      end
    endcase

endmodule



module color_input_memory (
    input  logic [10:0] address,
    input  logic [7:0]  data_in[1200],
    output logic [ 7:0] data_out[1:-1][1:-1]
);



  generate
    genvar i, j;
    for (i = -1; i <= 1; i++) begin
      for (j = -1; j <= 1; j++) begin
        assign data_out[j][i] = data_in[address+11'(j*40)+11'(i)];

      end
    end
  endgenerate
endmodule


module color (
    input logic clk, reset_n,
    input [7:0] data_in[1200],
    output rgba_t channels[1200],
    output done
);

  logic [10:0] address;

  always_ff @(posedge clk)
    if (!reset_n) begin
      done <= 0;
      address <= 0;
    end
    else if (address == 1200) begin
      done <= 1;
    end else address <= address + 1;


  logic [5:0] address_x;
  logic [4:0] address_y;
  assign address_x = 6'(address % 11'd40);
  assign address_y = 5'(address / 11'd40);

  logic [7:0] data_out[1:-1][1:-1];

  color_input_memory color_input_memory (
      .address (address),
      .data_in (data_in),
      .data_out(data_out)
  );

  lateral_t  lateral;
  vertical_t vertical;

  always_comb
    case (address_x)
      0: lateral = Left;
      39: lateral = Right;
      default: lateral = Center;
    endcase

  always_comb
    case (address_y)
      0: vertical = Top;
      29: vertical = Bottom;
      default: vertical = Middle;
    endcase

  // if x is even and y is even, red
  // if x is even xor y is even, blue
  // if x is odd and y is even, green beside red
  // if x is even and y is odd, green beside blue
  color_t col;
  always_comb
    case ({
      address_x[0], address_y[0]
    })
      2'b00: col = Red;
      2'b11: col = Blue;
      2'b10: col = GreenBesideRed;
      2'b01: col = GreenBesideBlue;
    endcase


  rgba_t pixel_out;

  filter3x3 filter3x3 (
      .pixels_in(data_out),
      .lateral(lateral),
      .vertical(vertical),
      .color(col),
      .pixel_out(pixel_out)
  );
  always_ff @(posedge clk) channels[address] <= pixel_out;
endmodule








// adapted from https://github.com/phoboslab/qoi/blob/master/qoi.h (reference c encoder)


module qoi #(parameter WIDTH = 40, parameter HEIGHT = 30 )
(
	input clk, reset_n,
        input rgba_t qoi_input_memory[1200],
        output logic [7:0] output_memory[6000],  // maximum 5 bytes per pixel, 1200 pixels = 6000 bytes
        output logic [12:0] bytes_output // 0 when not ready, number of bytes when done
	);

  logic [10:0] input_address;
  logic [12:0] output_address;

  logic [4:0][7:0] output_data;
  logic [2:0] output_count; 

  rgba_t cur_px;
  

  assign cur_px = qoi_input_memory[input_address];

  qoi_core #(
    .WIDTH(WIDTH),
    .HEIGHT(HEIGHT)
  ) core (
    .clk(clk),
    .reset_n(reset_n),
    .cur_px(cur_px),
    .output_data(output_data),
    .output_count(output_count)
  );

  logic done;
  always_ff @(posedge clk) done <= input_address >= WIDTH * HEIGHT + 2;

  always_ff @(posedge clk) 
	if (!reset_n) input_address <= 0;
        else if (!done) input_address <= input_address + 1;

  always_ff @(posedge clk)
    if (!reset_n) bytes_output <= 0;
    else if (input_address == WIDTH * HEIGHT + 1 && !done) begin
      bytes_output <= output_address + 13'(output_count);
    end


	generate genvar i;
	        for (i = 0; i < 5; i++) always_ff @(posedge clk) if (output_count > 0) output_memory[output_address + i] <= output_data[4 - i];
	endgenerate

	always_ff @(posedge clk) output_address <= output_address + 13'(output_count);
endmodule

module qoi_core #(
    parameter WIDTH = 40,
    HEIGHT = 30
) (
    input logic  clk,
    input logic  reset_n,
    input rgba_t cur_px,

    output logic [4:0][7:0] output_data,
    output logic [2:0] output_count  // zero bytes of output means no output yet!!
);


  logic [4:0][7:0] staged_data;
  logic [2:0] staged_count;

  rgba_t prev_px;

  logic [10:0] pixel_count;

  rgba_t index[64] = '{default: 0};
  logic [5:0] index_position;
  assign index_position = 6'(12'(cur_px.r * 3) + 12'(cur_px.g * 5) + 12'(cur_px.b * 7) + 12'(cur_px.a * 11)); // implicit mod 64


  logic almost_done;

  logic [5:0] run_count;

  assign almost_done = pixel_count == WIDTH * HEIGHT;


  logic last_running, running, stopped_running;
  assign running = !almost_done && (cur_px == prev_px);
  always_ff @(posedge clk) last_running <= running;
  assign stopped_running = last_running && !running;

  // These signals correspond to the names in the spec, plus the specified encoding biases
  logic [7:0] dr, dg, db, diff_green, dr_dg, db_dg;
  assign dr = cur_px.r - prev_px.r + 2;
  assign dg = cur_px.g - prev_px.g + 2;
  assign db = cur_px.b - prev_px.b + 2;
  assign diff_green = (cur_px.g - prev_px.g) + 32;
  assign dr_dg = (cur_px.r - prev_px.r) - (cur_px.g - prev_px.g) + 8;
  assign db_dg = (cur_px.b - prev_px.b) - (cur_px.g - prev_px.g) + 8;

  always_ff @(posedge clk) begin
    if (stopped_running) begin
    end
    if (!reset_n) begin
      prev_px <= '{8'h00, 8'h00, 8'h00, 8'hff};
      pixel_count <= 0;
      run_count <= 0;
    end else begin

      // This is derived by going backwards through the QOI spec,
      // trying to use the least bits possible to account for the current pixel.
      //
      // In order of efficiency
      //
      // RUN (last described pixel for free + run chunk... 1 byte / (run_count - 1) per pixel)
      // INDEX/DIFF (1 byte per pixel)
      // LUMA (2 bytes per pixel)
      // RGB (4 bytes per pixel)
      // RGBA (5 bytes per pixel)

        if (running && (run_count < 61)) begin  // RUN
          run_count <= run_count + 1;
  
          staged_data <= {2'b11, run_count, 32'b0}; // because run output is "shorted," the bias is accounted for in the cycle lag
          staged_count <= 0;
        end else if (running) begin  // RUN
          run_count <= 1;  // start next run on 1
  
          staged_data <= {2'b11, run_count, 32'b0};
          staged_count <= 1;
        end else if (index[index_position] == cur_px) begin  // INDEX
          run_count <= 0;

          staged_data  <= {2'b00, index_position, 32'b0};
          staged_count <= 1;
      end else if (
		diff_green[7:6] == 2'b00 &&
		dr_dg[7:4] == 4'b0000 &&
		db_dg[7:4] == 4'b0000
	) begin // LUMA
        // If there is no overflow on the LUMA encoding fields, we can use it!
        run_count <= 0;

        staged_data  <= {2'b10, diff_green[5:0], dr_dg[3:0], db_dg[3:0], 24'b0};
        staged_count <= 2;
      end else if (
		dr[7:2] == 6'b000000 &&
		dg[7:2] == 6'b000000 &&
		db[7:2] == 6'b000000
	) begin // DIFF
        // If there is no overflow on the DIFF encoding fields, we can use it!
        run_count <= 0;

        staged_data <= {2'b01, dr[1:0], dg[1:0], db[1:0], 32'b0};
        staged_count <= 1;
      end else if (cur_px.a == prev_px.a) begin  // RGB
        run_count <= 0;

        staged_data  <= {8'b11111110, cur_px.r, cur_px.g, cur_px.b, 8'b0};
        staged_count <= 4;
      end else begin  // RGBA
        run_count <= 0;

        staged_data  <= {8'b11111111, cur_px};
        staged_count <= 5;
      end

      prev_px <= cur_px;
      pixel_count <= pixel_count + 1;
      index[index_position] <= cur_px;

      // if a run ends, output last_cycle's staged data immediately
      output_data  <= staged_data;
      output_count <= stopped_running ? 1 : staged_count;
    end
  end
endmodule


module integrated_core(
  input logic clk, reset_n,
  input logic [7:0] data_in[1200]  /* synthesis syn_ramstyle="block_ram" */,
  output logic [7:0] output_memory[6000]  /* synthesis syn_ramstyle="block_ram" */,
  output logic [12:0] bytes_output
  );
  rgba_t qoi_input_memory[1200]  /* synthesis syn_ramstyle="block_ram" */;

  logic color_done;

  color color (
      .clk(clk),
      .reset_n(reset_n),
      .data_in(data_in),
      .channels(qoi_input_memory),
      .done(color_done)
  );

  qoi qoi (
      .clk(clk),
      .reset_n(color_done),
      .qoi_input_memory(qoi_input_memory),
      .output_memory(output_memory),
      .bytes_output(bytes_output)
  );

endmodule


// adapted from https://github.com/HMC-E155/HMC-E155/blob/main/lab/lab07/lab07_fpga/src/aes_starter.sv
module spi(
  input logic reading,
  output logic writing, // writing is more "write ready"
  input logic sck, sdi, 
  output logic sdo, spi_done,

  output logic [7:0] data_in[1200],
  input logic [7:0] output_memory[6000],
  input logic [12:0] bytes_output
  );

  assign writing = bytes_output > 0;

  logic [15:0] read_bit_counter;
  logic [2:0] read_bit_address;
  logic [12:0] read_byte_address;
  assign read_byte_address =  read_bit_counter[15:3];
  assign read_bit_address =  7-read_bit_counter[2:0];

  logic [15:0] write_bit_counter;
  logic [2:0] write_bit_address;
  logic [12:0] write_byte_address;
  assign write_byte_address =  write_bit_counter[15:3];
  assign write_bit_address =  7-write_bit_counter[2:0];

  logic sdo_delayed, prev_writing;


  always_ff @(posedge sck) 
    if (reading) begin
      data_in[11'(read_byte_address)][read_bit_address] <= sdi;
      read_bit_counter <= read_bit_counter + 1;
    end else read_bit_counter <= 0;

    // sdo gets set on the falling edge of sck
  always_ff @(negedge sck) 
    begin
      prev_writing <= writing;
      if (writing) begin
        sdo_delayed <= output_memory[write_byte_address][write_bit_address];
        write_bit_counter <= write_bit_counter + 1; 
      end else write_bit_counter <= 0;
    end



  assign spi_done = write_byte_address == bytes_output && write_bit_address == 6;  // 2 bit "delay" into the first_past address

  assign sdo = (writing && !prev_writing) ? output_memory[0][7] : sdo_delayed; 
endmodule


module integrated(
  input logic clk, sdi, sck, reading,
  output logic sdo, writing, spi_done
  );

  logic [7:0] data_in[1200]  /* synthesis syn_ramstyle="block_ram" */;
  logic [7:0] output_memory[6000]  /* synthesis syn_ramstyle="block_ram" */;
  logic [12:0] bytes_output;

  integrated_core integrated_core (
      .clk(clk),
      .reset_n(~reading),
      .data_in(data_in),
      .output_memory(output_memory),
      .bytes_output(bytes_output)
  );

  spi spi (
    .reading(reading),
    .writing(writing),
    .sck(sck),
    .sdi(sdi),
    .sdo(sdo),
    .spi_done(spi_done),
    .data_in(data_in),
    .output_memory(output_memory),
    .bytes_output(bytes_output)
  );
endmodule


module integrated_tb(
    input logic clk
    );

    logic sdi, sck, reading;
    logic sdo, writing, spi_done;

    integrated dut(
        .clk(clk),
        .sdi(sdi),
        .sck(sck),
        .reading(reading),
        .sdo(sdo),
        .writing(writing),
        .spi_done(spi_done)
    );

    logic [7:0] data_in[1200]  /* synthesis syn_ramstyle="block_ram" */;
    initial $readmemh("image.mem", data_in);


    logic [7:0] output_memory[6000]  /* synthesis syn_ramstyle="block_ram" */;
    initial output_memory = '{default: 0};

    int it, read_it;
    initial begin
      sdi = 0;
      sck = 0;
      reading = 1;
      writing = 0;
      it = 0;
      read_it = 0;
    end

    logic writing_last;

    always_ff @(posedge clk) writing_last <= writing;

    always_ff @(posedge clk) it <= it + 1;

    always_ff @(posedge clk)
      if (it < 1200*8 * 2) begin 
        sdi <= data_in[(it/2)/8][7-(it/2)%8];
        sck <= 1'(it % 2);
      end else if (it == 1200*8 * 2) begin
        reading <= 0;
      end else if (writing & !writing_last) begin
        read_it <= 0;
        sck <= 0;
      end else if (writing & !spi_done) begin
        read_it <= read_it + 1;
        sck <= 1'(read_it % 2);
        output_memory[(read_it/2)/8][7-((read_it/2)%8)] <= sdo;
      end else if (spi_done &  writing) begin
        $display("Bytes output: %d", dut.bytes_output);
        $writememh("output.mem", output_memory);
        $finish;
      end
endmodule
