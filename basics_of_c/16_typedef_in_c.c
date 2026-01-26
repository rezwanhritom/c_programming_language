// 16_typedef_in_c.c
// --------------------------------------------------
// Demonstrates the typedef keyword to simplify complex type declarations.
// --------------------------------------------------

#include <stdio.h>

// Normal structure
struct Student {
    char name[50];
    int id;
};

// Using typedef
typedef struct Student Student; // Now we can use 'Student' directly

// Typedef for primitive types
typedef unsigned long ulong;

int main() {
    Student s1 = {"Alice", 101};
    ulong population = 8000000;

    printf("Name: %s, ID: %d\n", s1.name, s1.id);
    printf("Population: %lu\n", population);

    // Tweaking:
    // - You can typedef complex pointer types for simplicity.
    // - Common in libraries to define cross-platform data types.
    return 0;
}
