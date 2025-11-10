// 18_header_file_usage.c
// --------------------------------------------------
// Demonstrates how to create and use custom header files in C.
// Requires helper.h in the same directory.
// --------------------------------------------------

#include <stdio.h>
#include "helper.h" // Custom header file

int main() {
    int a = 10, b = 20;

    printf("Sum: %d\n", add(a, b));
    printf("Difference: %d\n", subtract(a, b));

    return 0;
}
