OUTPUT_ARCH("riscv")
ENTRY(main)

SECTIONS {
  . = 0x80000000;

  .text : {
    *(.text)
    *(.text*)
  }

  .rodata : {
    *(.rodata)
    *(.rodata*)
  }

  .data : {
    *(.data)
    *(.data*)
  }

  .bss : {
    *(.bss)
    *(COMMON)
  }

  _end = .;
}
