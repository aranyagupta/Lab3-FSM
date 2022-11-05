module top
#(
    parameter WIDTH = 16
)
(
    input logic clk,
    input logic en,
    input logic rst,
    input logic [WIDTH-1:0] N,
    output logic tick,
    output logic [7:0] dout
);

clktick myClockTick(
    .clk (clk),
    .rst (rst),
    .en(en),
    .N (N),
    .tick(tick)
);

f1_fsm myF1(
    .clk (clk),
    .rst (rst),
    .en (tick),
    .dout (dout)
);

endmodule
