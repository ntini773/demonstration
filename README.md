# demonstration

# 1.Spike RISC-V Simulator Example

This repository demonstrates how to simulate a bare-metal RISC-V program using the [Spike ISA Simulator](https://github.com/riscv-software-src/riscv-isa-sim).

## Prerequisites

Make sure the following tools are installed and available in your `PATH`:

- `riscv32-unknown-elf-gcc`
- `spike`
- (Optional) `riscv32-unknown-elf-objdump` and `riscv32-unknown-elf-objcopy`

## Files

- `test.c`: Your simple C program with a `main()` function.
- `link.ld`: A custom linker script setting entry and section layout.

  ```

  ```

## Code Example (`test.c`)

```c
volatile int tohost;

int main() {
    volatile int a = 5;
    volatile int b = 3;
    volatile int e = 2;

    volatile int c = a + b; // c = 8
    volatile int d = c + e; // d = 10

    tohost = 1; // Signal Spike that execution is done
    while (1);
}

```

## Linker Script Example (`link.ld`)

```ld
OUTPUT_ARCH( "riscv" )
ENTRY(main)

SECTIONS
{
  . = 0x80000000;
  .text.init : {*(text.init)}


  .tohost : {
    *(.tohost)
  }
  .text : {
    *(.text)
  }

  . = ALIGN(0x1000);
  .data : {
    *(.data)
  }

  .bss : {
    *(.bss)
    *(COMMON)
  }

  _end = .;
}

```

Running the following commands to get the spike.log

```bash
cd demonstration
riscv32-unknown-elf-gcc -march=rv32imc -mabi=ilp32 -nostartfiles -T link.ld -o test.elf test.c
spike --isa=rv32im -l --log=spike.log test.elf
```

![1744620862382](image/README/1744620862382.png)

![1744621143475](image/README/1744621143475.png)

# 2.Ibex Simple System Simulator Example

# Hello Test with Verilator

This README outlines the steps to compile and simulate the hello_test program on the ibex_simple_system using Verilator.

---

## 🛠️ 1. Prerequisites

Make sure you have the following installed:

- FuseSoC
- Verilator (v5+ recommended)
- RISC-V GCC toolchain (e.g., riscv32-unknown-elf-gcc)

---

## 2. Clone and Setup Ibex

```bash
git clone https://github.com/lowRISC/ibex.git demonstration/ibex
cd demonstration/ibex
fusesoc library add lowrisc-ip https://github.com/lowRISC/opentitan.git
fusesoc run --target=sim --tool=verilator lowrisc:ibex:ibex_simple_system --trace
```

## 3. Build the Hello Test Program

```bash
cd demonstration/ibex
make -C examples/sw/simple_system/hello_test
```

This compiles the `hello_test.c` and generates `hello_test.vmem`, the memory file used for simulation.

## 4. Build the Verilator Simulation Binary

In a **separate terminal**, go to the Verilator output directory and run `make`:

```bash
cd demonstration/ibex/build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/
make
```

This compiles the C++ simulation files and generates the `Vibex_simple_system` binary.

## 5. Run the Simulation

Back in the `demonstration/ibex` root directory:

```bash
./build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/Vibex_simple_system \
--meminit=ram,examples/sw/simple_system/hello_test/hello_test.vmem \
--trace
```

* `--meminit=ram,<path>` loads the RAM with your compiled program.
* `--trace` enables waveform tracing output.

![1744646675769](image/README/1744646675769.png)
