#include <stdio.h>

int main() {
    int array[20] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};
    int largest = array[0];
    int secondLargest = array[0];
    int i;
    
    for (i = 1; i < 20; i++) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i];
        }
    }
    
    printf("Second Largest Element: %d\n", secondLargest);
    
    return 0;
}
