#include <stdio.h>
int main() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int i, j, sum = 0;

    // Compute the sum of matrix elements
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }

    printf("The sum of matrix elements: %d\n", sum);

    return 0;
}
