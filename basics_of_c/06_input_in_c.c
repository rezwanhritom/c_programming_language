// 06_input_in_c.c
// --------------------------------------------------
// Demonstrates how to take user input for different data types.
// Includes int, float, double, char, and string input.
// Tweaking format specifiers or & (address-of) symbol can cause issues.
// --------------------------------------------------

#include <stdio.h>

int main() {
    int age;
    float height;
    double weight;
    char grade;
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name); // %s stops at space, safer to limit input length

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your weight (in kg): ");
    scanf("%lf", &weight);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // Leading space skips leftover newline

    printf("\n--- User Information ---\n");
    printf("Name: %s\nAge: %d\nHeight: %.2f\nWeight: %.2lf\nGrade: %c\n",
           name, age, height, weight, grade);

    // Tweaking:
    // - Omitting '&' for numbers will cause undefined behavior.
    // - Using %s only reads until space; for full lines use fgets().
    return 0;
}
