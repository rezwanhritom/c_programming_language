// 05_functions_in_c.c
// --------------------------------------------------
// This file demonstrates how to declare, define, and call functions in C.
// Shows both functions with and without return values.
// Tweaking the parameters or return types affects how you use them.
// --------------------------------------------------

#include <stdio.h>

// Function declaration (prototype)
int addNumbers(int a, int b);
void greetUser();

int main() {
    int sum = addNumbers(5, 7);  // Function call
    printf("Sum = %d\n", sum);

    greetUser();  // Calling a void function
    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;  // Returns an integer
}

// Void function (no return value)
void greetUser() {
    printf("Hello from a function!\n");
}

// Tweaking:
// - Changing return type to float would require %f in printf.
// - Adding parameters allows passing different values each time.
