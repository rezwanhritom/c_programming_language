// 17_macros_and_preprocessor.c
// --------------------------------------------------
// Demonstrates macros and preprocessor directives like #define and #include.
// These are handled before compilation by the preprocessor.
// --------------------------------------------------

#include <stdio.h>

#define PI 3.1416               // Constant macro
#define AREA(r) (PI * (r) * (r)) // Function-like macro
#define SQUARE(x) ((x) * (x))    // Demonstrates macro expansion

int main() {
    float radius = 5.0;

    printf("Area of circle with radius %.2f = %.2f\n", radius, AREA(radius));
    printf("Square of 4 = %d\n", SQUARE(4));

    // Tweaking:
    // - Parentheses are important to avoid operator precedence issues.
    // - You can use #ifdef / #ifndef for conditional compilation.
    return 0;
}
