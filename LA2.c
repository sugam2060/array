#include <stdio.h>

int main() {
    int array[100];
    int count, i;

    printf("Enter the count of numbers (up to 100): ");
    scanf("%d", &count);

    printf("Enter %d numbers:\n", count);
    for (i = 0; i < count; i++) {
        scanf("%d", &array[i]);
    }
    printf("Three-digit even integers in the array: \n");
    for (i = 0; i < count; i++) {
        if (array[i] >= 100 && array[i] <= 999 && array[i] % 2 == 0) {
            printf("%d\n", array[i]);
        }
    }
    

    return 0;
}
