// 11_file_handling_in_c.c
// --------------------------------------------------
// Demonstrates basic file handling in C.
// Opens a file, writes data, then reads it back.
// Tweaking file mode ("w", "a", "r") changes how files are accessed.
// --------------------------------------------------

#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Writing to a file
    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello from C File Handling!\n");
    fclose(fp);

    // Reading from a file
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File contents:\n");
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }
    fclose(fp);

    // Tweaking:
    // - Changing "w" to "a" appends instead of overwriting.
    // - Always close files to prevent data loss.
    return 0;
}
