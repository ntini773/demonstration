#!/bin/bash

mkdir -p bin

~/projects/riscv-verification/riscv-gnu-toolchain/install/bin/riscv32-unknown-elf-gcc \
    -march=rv32imc -mabi=ilp32 \
    -nostartfiles -nostdlib -T link.ld \
    -o bin/test_1.elf test_1.c
	
