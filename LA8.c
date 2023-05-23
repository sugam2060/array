#include <stdio.h>
void transpose(int matrix[3][3], int result[3][3]) {
    int i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[3][3]) {
    int i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int result[3][3];
    
    printf("Original Matrix:\n");
    printMatrix(matrix);
    
    transpose(matrix, result);
    
    printf("Transposed Matrix:\n");
    printMatrix(result);
    
    return 0;
}
