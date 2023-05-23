#include <stdio.h>

void sortThreeElements(int array[]) {
    if (array[0] > array[1]) {
        int temp = array[0];
        array[0] = array[1];
        array[1] = temp;
    }
    
    if (array[1] > array[2]) {
        int temp = array[1];
        array[1] = array[2];
        array[2] = temp;
    }
    
    if (array[0] > array[1]) {
        int temp = array[0];
        array[0] = array[1];
        array[1] = temp;
    }
}

int main() {
    int array[3] = {10, 5, 8};
    
    printf("Original Array: %d %d %d\n", array[0], array[1], array[2]);
    
    sortThreeElements(array);
    
    printf("Sorted Array: %d %d %d\n", array[0], array[1], array[2]);
    
    return 0;
}
