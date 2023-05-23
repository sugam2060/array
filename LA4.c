#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int i, temp;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Swap pairs of elements starting from the beginning
    for (i = 0; i < size - 1; i += 2) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }

    printf("Array after swapping pairs: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
