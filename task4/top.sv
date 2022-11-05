module top(
    input logic clk,
    input logic rst, 
    input logic trigger,
    input logic [7:0] countDownSpeed,
    output logic [7:0] dout,
    output logic cmd_seq,
    output logic cmd_delay,
    output logic [7:0] LFSROut,
    output logic time_out_0,
    output logic time_out_1
);

lfsr myLFSR(
    .clk(clk),
    .rst(rst),
    .en(1'b1),
    .data_out(LFSROut)
);

delay myDelay(
    .clk(clk),
    .rst(rst),
    .trigger(cmd_delay),
    .n ({1'b0, LFSROut}),
    .time_out(time_out_0)
);

clktick myClktick(
    .clk(clk),
    .rst(rst),
    .en(cmd_seq),
    .N(countDownSpeed),
    .tick(time_out_1)
);

f1_fsm myF1FSM(
    .clk(clk),
    .rst(rst),
    .en((cmd_seq)?(time_out_1):(time_out_0)),
    .trigger(trigger),
    .dout(dout),
    .cmd_delay(cmd_delay),
    .cmd_seq(cmd_seq)
);

endmodule
