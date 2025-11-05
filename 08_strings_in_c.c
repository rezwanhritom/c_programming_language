// 08_strings_in_c.c
// --------------------------------------------------
// Demonstrates how to work with strings in C.
// Uses <string.h> functions for manipulation.
// Tweaking buffer size or missing '\0' can break strings.
// --------------------------------------------------

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50];

    printf("Enter another string: ");
    scanf("%49s", str2);

    // String operations
    printf("\nConcatenation: %s\n", strcat(str1, str2));
    printf("Length of final string: %lu\n", strlen(str1));
    printf("Copying string: %s\n", strcpy(str2, "Copied!"));
    printf("Comparing strings: %d\n", strcmp(str1, str2));

    // Tweaking:
    // - strcat without ensuring enough space can cause buffer overflow.
    // - strcmp returns 0 if strings are equal.
    return 0;
}
