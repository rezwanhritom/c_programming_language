// 07_arrays_in_c.c
// --------------------------------------------------
// Demonstrates how to declare, initialize, and access arrays.
// Shows both static and user-input arrays.
// Tweaking index ranges can cause segmentation faults.
// --------------------------------------------------

#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Array elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // User input array
    int size;
    printf("Enter number of elements (max 10): ");
    scanf("%d", &size);

    int arr[10];
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Tweaking:
    // - Accessing arr[size] or beyond will cause undefined behavior.
    // - You can change int to float or char for other types.
    return 0;
}
