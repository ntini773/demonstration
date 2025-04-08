#!/bin/bash

ELF=bin/test_1.elf

if [ ! -f "$ELF" ]; then
  echo "❌ ELF file not found! Compile first using ./compile.sh"
  exit 1
fi

~/projects/riscv-verification/riscv-gnu-toolchain/spike/spike \
    --isa=RV32IMC \
    --varch=vlen:0,elen:0,slmax:0 \
    --log-commits \
    --log-htif \
    ~/projects/riscv-verification/riscv-gnu-toolchain/pk/pk $ELF
