#include <stdio.h>

int main() {
    int array[] = {3, 6, 1, 8, 5, 2, 7, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int i, j, temp;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Arrange the numbers: odd numbers first, even numbers later
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[j] % 2 != 0) {  // Swap if the current number is odd
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Array after arranging: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
