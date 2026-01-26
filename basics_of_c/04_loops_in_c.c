// 04_loops_in_c.c
// --------------------------------------------------
// This file demonstrates different loop types in C.
// Includes for, while, and do-while loops.
// Tweaking the condition or increment will change how many times loops run.
// --------------------------------------------------

#include <stdio.h>

int main() {
    int i;

    // For loop
    printf("For loop: ");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop
    printf("While loop: ");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Do-while loop
    printf("Do-while loop: ");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");

    // Tweaking:
    // - Changing i <= 5 to i < 5 will reduce loop runs by one.
    // - Forgetting i++ will cause an infinite loop.
    return 0;
}
