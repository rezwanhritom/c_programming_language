// 03_conditionals_in_c.c
// --------------------------------------------------
// This file demonstrates the main conditional statements in C.
// Includes if, else if, else, and switch-case.
// Tweaking the values or conditions will change which block runs.
// --------------------------------------------------

#include <stdio.h>

int main() {
    int number = 10;

    // Simple if-else
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Switch statement
    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    // Tweaking:
    // - Changing number to -5 will trigger the "negative" case.
    // - Removing break statements will cause "fall through" in switch.
    return 0;
}
