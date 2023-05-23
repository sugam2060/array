#include <stdio.h>

int isSymmetric(int matrix[][3]) {
    int i, j;
    
    // Checking for symmetry
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    
    return 1; // Symmetric
}

int main() {
    int matrix[3][3] = {{1, 2, 3},
                              {2, 4, 5},
                              {3, 5, 6}};
    
    if (isSymmetric(matrix)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    
    return 0;
}
