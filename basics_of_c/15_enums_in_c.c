// 15_enums_in_c.c
// --------------------------------------------------
// Demonstrates how to use enumerations (enum) to represent named constants.
// Useful for making code more readable.
// --------------------------------------------------

#include <stdio.h>

// Define enum for days of the week
enum Weekday { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    enum Weekday today = Wednesday;

    printf("Day number: %d\n", today);

    if (today == Wednesday)
        printf("It's midweek!\n");

    // Tweaking:
    // - By default, Sunday = 0, but you can assign custom values.
    //   e.g., enum Weekday { Sunday = 1, Monday = 2, ... };
    return 0;
}
