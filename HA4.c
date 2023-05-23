#include <stdio.h>
#include <math.h>
float findMean(int array[], int size) {
    int sum = 0;
    int i;
    
    for (i = 0; i < size; i++) {
        sum += array[i];
    }
    
    return (float)sum / size;
}

float findStandardDeviation(int array[], int size) {
    float mean = findMean(array, size);
    float sumOfSquaredDifferences = 0.0;
    int i;
    
    for (i = 0; i < size; i++) {
        float difference = array[i] - mean;
        sumOfSquaredDifferences += difference * difference;
    }
    
    return sqrt(sumOfSquaredDifferences / size);
}

int main() {
    int array[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    float standardDeviation;
    
    standardDeviation = findStandardDeviation(array, 10);
    
    printf("Standard Deviation: %.2f\n", standardDeviation);
    
    return 0;
}
