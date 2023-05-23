#include <stdio.h>
int isOrthogonal(int matrix[][3]) {
    int i, j, k;
    int dotProduct;
    
    // Checking for orthogonality
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            dotProduct = 0;
            
            for (k = 0; k < 3; k++) {
                dotProduct += matrix[i][k] * matrix[j][k];
            }
            
            if (i == j && dotProduct != 1) {
                return 0; // Not orthogonal
            } else if (i != j && dotProduct != 0) {
                return 0; // Not orthogonal
            }
        }
    }
    
    return 1; // Orthogonal
}

int main() {
    int matrix[3][3] = {{1, 0, 0},
                        {0, 1, 0},
                        {0, 0, 1}};
    
    if (isOrthogonal(matrix)) {
        printf("The matrix is orthogonal.\n");
    } else {
        printf("The matrix is not orthogonal.\n");
    }
    
    return 0;
}
