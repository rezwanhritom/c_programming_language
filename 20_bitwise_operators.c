// 20_bitwise_operators.c
// --------------------------------------------------
// Demonstrates bitwise operations: AND, OR, XOR, NOT, shift left, shift right.
// Used in low-level programming, optimization, and embedded systems.
// --------------------------------------------------

#include <stdio.h>

int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary

    printf("a & b = %d\n", a & b);   // AND -> 0001
    printf("a | b = %d\n", a | b);   // OR  -> 0111
    printf("a ^ b = %d\n", a ^ b);   // XOR -> 0110
    printf("~a = %d\n", ~a);         // NOT -> flips bits
    printf("a << 1 = %d\n", a << 1); // Left shift
    printf("a >> 1 = %d\n", a >> 1); // Right shift

    // Tweaking:
    // - Shifting left multiplies by 2, shifting right divides by 2.
    // - Be careful with signed integers and large shifts.
    return 0;
}
