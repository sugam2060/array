#include <stdio.h>

int main() {
    int array[100];
    int n, i;
    int largestEven = -1; // initialize with -1 assuming there are no even numbers

    printf("Enter the count of numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        if (array[i] % 2 == 0 && array[i] > largestEven) {
            largestEven = array[i];
        }
    }

    if (largestEven != -1) {
        printf("The largest even integer is: %d\n", largestEven);
    } else {
        printf("No even integer found in the array.\n");
    }

    return 0;
}
