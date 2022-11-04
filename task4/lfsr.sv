module lfsr #(
    WIDTH = 7
)
(
    input logic clk,
    input logic rst,
    input logic en,
    output logic [WIDTH-1:0] data_out
);
logic [WIDTH-1:0] sreg;
always_ff @(posedge clk, posedge rst) begin
    if (rst)
        sreg <= {WIDTH{1'b1}};
    else if (en)
        sreg <= {sreg[WIDTH-2:0], sreg[2] ^ sreg[6]};
    else
        sreg <= sreg;

assign data_out = sreg;    
end
    
endmodule
