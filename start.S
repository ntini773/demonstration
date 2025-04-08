.section .text
.global _start

_start:
    call main         # Call the main() function written in C
1:
    j 1b              # Infinite loop to prevent fallthrough after main

