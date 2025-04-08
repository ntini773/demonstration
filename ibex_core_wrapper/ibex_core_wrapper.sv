module ibex_core_wrapper (
    input logic clk,
    input logic rst
);
    logic [31:0] instr_rdata;
    logic instr_valid;

    logic [31:0] mem_rdata;
    logic mem_ready;

    // RVFI
    logic        rvfi_valid;
    logic [31:0] rvfi_pc_rdata;
    logic [31:0] rvfi_insn;
    logic [4:0]  rvfi_rd_addr;
    logic [31:0] rvfi_rd_wdata;

    // Instantiate core
    ibex_core #(
        .RVFI(1)
    ) core (
        .clk_i(clk),
        .rst_ni(~rst),

        .instr_rdata_i(instr_rdata),
        .instr_valid_i(instr_valid),
        // ... Add other mem bus and handshake signals ...

        .rvfi_valid_o(rvfi_valid),
        .rvfi_pc_rdata_o(rvfi_pc_rdata),
        .rvfi_insn_o(rvfi_insn),
        .rvfi_rd_addr_o(rvfi_rd_addr),
        .rvfi_rd_wdata_o(rvfi_rd_wdata)
    );

    // TODO: Connect to memory module

endmodule
