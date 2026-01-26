// 27_math_library_usage.c
// --------------------------------------------------
// Demonstrates usage of <math.h> functions like sqrt, pow, sin, cos.
// Requires linking with -lm when compiling (gcc file.c -lm).
// --------------------------------------------------

#include <stdio.h>
#include <math.h>

int main() {
    double num = 16.0;

    printf("sqrt(16) = %.2f\n", sqrt(num));
    printf("pow(3, 3) = %.2f\n", pow(3, 3));
    printf("sin(30°) = %.2f\n", sin(30 * M_PI / 180));
    printf("cos(60°) = %.2f\n", cos(60 * M_PI / 180));

    // Tweaking:
    // - M_PI is not standard on all compilers; define manually if needed.
    return 0;
}
