int main() {
    volatile int *led = (int *)0x80001000;
    *led = 0xDEADBEEF;
    while (1);  // infinite loop to prevent exit
}
