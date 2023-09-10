//c performance
#include <stdio.h>
int main() {
    float clockRates[3] = {3.0, 3.5, 4.0}; 
    float CPIs[3] = {1.5, 9.0, 2.2}; 
    int instructionCount = 100; 
    for (int i = 0; i < 3; i++) {
        float executionTime = (CPIs[i] * instructionCount) / clockRates[i];
        printf("P%d CPU time is %.2f\n", i + 1, executionTime);
    }
    return 0;
}
