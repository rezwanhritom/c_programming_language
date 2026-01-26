// 12_dynamic_memory_allocation.c
// --------------------------------------------------
// Demonstrates dynamic memory allocation using malloc, calloc, realloc, and free.
// Memory is allocated at runtime, allowing flexible array sizes.
// --------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // malloc allocates memory (uninitialized)
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // realloc increases memory size
    printf("\nEnter new size: ");
    scanf("%d", &n);
    arr = (int *)realloc(arr, n * sizeof(int));

    if (arr == NULL) {
        printf("Reallocation failed!\n");
        return 1;
    }

    printf("New memory allocated for %d elements.\n", n);

    // Always free memory
    free(arr);

    // Tweaking:
    // - Forgetting to free() causes memory leaks.
    // - calloc initializes memory with 0, unlike malloc.
    return 0;
}
