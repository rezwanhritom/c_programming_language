// 21_error_handling_in_c.c
// --------------------------------------------------
// Demonstrates basic error handling in C using errno and perror.
// --------------------------------------------------

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *fp = fopen("nonexistent.txt", "r");

    if (fp == NULL) {
        printf("Error Number: %d\n", errno);
        perror("File opening error");
        printf("Error Description: %s\n", strerror(errno));
    } else {
        fclose(fp);
    }

    // Tweaking:
    // - errno holds the last error code.
    // - perror() automatically prints a readable message.
    return 0;
}
