#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int size = 10;
    int i, j, temp;
    float median;
    
    // Sorting the array in ascending order using Bubble Sort
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    // Calculating the median
    if (size % 2 == 0) {
        median = (array[size / 2 - 1] + array[size / 2]) / 2.0;
    } else {
        median = array[size / 2];
    }
    
    printf("Median: %.2f\n", median);
    
    return 0;
}
