#include <stdio.h>
int main() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int i, sum = 0;
    
    // Calculating the sum of diagonal elements
    for (i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }
    
    printf("Sum of Diagonal Elements: %d\n", sum);
    
    return 0;
}
