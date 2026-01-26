// 13_recursion_in_c.c
// --------------------------------------------------
// Demonstrates recursive functions using factorial and Fibonacci examples.
// Tweaking the base case or recursive step can cause infinite recursion.
// --------------------------------------------------

#include <stdio.h>

int factorial(int n);
int fibonacci(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));
    printf("Fibonacci(%d) = %d\n", num, fibonacci(num));

    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Tweaking:
// - Removing base case causes infinite recursion (stack overflow).
// - Iterative versions run faster for large numbers.
