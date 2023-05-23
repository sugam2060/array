#include <stdio.h>

int main() {
    int array[10];
    int i;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    printf("Elements in the array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}