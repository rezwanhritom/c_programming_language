// 19_storage_classes.c
// --------------------------------------------------
// Demonstrates the four main storage classes in C:
// auto, register, static, and extern.
// --------------------------------------------------

#include <stdio.h>

int globalVar = 10; // Used to demonstrate extern

void demoFunction() {
    static int count = 0; // Static retains value between calls
    count++;
    printf("Function called %d times.\n", count);
}

int main() {
    auto int localVar = 5;     // Default inside functions
    register int fastVar = 3;  // Suggests storing in CPU register
    extern int globalVar;      // Accessing global variable

    printf("auto variable: %d\n", localVar);
    printf("register variable: %d\n", fastVar);
    printf("extern variable: %d\n", globalVar);

    demoFunction();
    demoFunction();

    // Tweaking:
    // - Static variable keeps its last value even after function ends.
    // - register keyword is a hint, not a guarantee.
    return 0;
}
