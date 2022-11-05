module f1_fsm(
    input logic rst,
    input logic en,
    input logic clk,
    input logic trigger,
    output logic cmd_seq,
    output logic cmd_delay,
    output logic [7:0] dout
);

// states
typedef enum  {S0, S1, S2, S3, S4, S5, S6, S7, S8 } states;
states current, next;

// register logic
always_ff @(posedge clk, posedge rst, posedge trigger) begin 
    if (rst) current <= S0;
    else if (trigger || current!=S0) begin
        if (en)
            current <= next;
        else
            current <= current;
    end
    else current <= S0;
    
end

// next state logic 
always_comb begin
    case (current)
        S0: next = S1;
        S1: next = S2;
        S2: next = S3;
        S3: next = S4;
        S4: next = S5;
        S5: next = S6;
        S6: next = S7;
        S7: next = S8;
        S8: next = S0;
        default: next = S0;
    endcase
// output logic
    case (current)
        S0: dout = {8'b0};
        S1: dout = {7'b0, 1'b1};
        S2: dout = {6'b0, 2'b11};
        S3: dout = {5'b0, 3'b111};
        S4: dout = {4'b0, 4'b1111};
        S5: dout = {3'b0, 5'b11111};
        S6: dout = {2'b0, 6'b111111};
        S7: dout = {1'b0, 7'b1111111};
        S8: dout = {8'b11111111};
        default: dout = {8'b0};
    endcase

    case (current)
        S8: cmd_seq = 1'b0;
        default: cmd_seq = 1'b1;
    endcase

    case (current)
        S8: cmd_delay = 1'b1;
        default: cmd_delay = 1'b0;
    endcase

end
endmodule
