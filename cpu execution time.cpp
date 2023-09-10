#include <stdio.h>
int main() {
    float clockRates[3] = {3.0, 2.5, 4.0}; 
    float CPIs[3] = {1.5, 1.0, 2.2}; 
    int instructionCount = 100; 
    for (int i = 0; i < 3; i++) {
        float executionTime = (CPIs[i] * instructionCount) / clockRates[i];
        printf("CPU time is %f\n",  executionTime);
    }
    return 0;
}
