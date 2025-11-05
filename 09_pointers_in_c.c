// 09_pointers_in_c.c
// --------------------------------------------------
// Demonstrates pointer basics: addresses, dereferencing, and variable linking.
// Tweaking * and & symbols changes what value or address you work with.
// --------------------------------------------------

#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a; // Pointer stores the address of a

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value stored in ptr (address): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 20; // Modify the value of a through the pointer
    printf("New value of a after pointer modification: %d\n", a);

    // Tweaking:
    // - Using uninitialized pointers causes crashes.
    // - Removing * changes from value access to address handling.
    return 0;
}
