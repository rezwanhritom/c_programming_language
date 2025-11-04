// 02_variables_and_datatypes.c
// --------------------------------------------------
// This file demonstrates different variable types in C.
// It shows how to declare, initialize, and print them.
// Tweaking the data types or format specifiers can change how data appears.
// --------------------------------------------------

#include <stdio.h>

int main() {
    int age = 20;               // Integer variable
    float height = 5.9;         // Floating-point number
    double weight = 65.789;     // Double precision number
    char grade = 'A';           // Character
    char name[] = "Rezwan";     // String (array of chars)

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Weight: %.2lf\n", weight);
    printf("Grade: %c\n", grade);

    // Tweaking:
    // - Changing %.1f to %.2f will print more decimal places.
    // - Assigning wrong types (e.g., putting 'text' in int) will cause errors.
    return 0;
}
