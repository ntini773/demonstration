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

