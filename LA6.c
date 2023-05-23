#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int i;
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Array in reverse order: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
