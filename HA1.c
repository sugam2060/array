#include <stdio.h>



void swapArrayElements(int array[], int size) {
    int i, temp;
    
    for (i = 0; i < size / 2; i++) {
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

void printArray(int array[], int size) {
    int i;
    
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[6] = {1, 2, 3, 4, 5, 6};
    
    printf("Original Array: ");
    printArray(array, 6);
    
    swapArrayElements(array, 6);
    
    printf("Swapped Array: ");
    printArray(array, 6);
    
    return 0;
}
