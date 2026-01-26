// 14_command_line_arguments.c
// --------------------------------------------------
// Demonstrates how to use command-line arguments in C.
// Arguments passed when running the program are captured in argc and argv.
// --------------------------------------------------

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    printf("Program name: %s\n", argv[0]);

    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    // Tweaking:
    // - Run program like: ./a.out Hello World
    // - argc counts total arguments (including program name).
    return 0;
}
