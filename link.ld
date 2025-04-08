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

