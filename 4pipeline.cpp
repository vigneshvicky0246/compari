#include <stdio.h>

int main() {
    int a, b, choice, rev,fetchcycle,decodecycle,executioncycle,databackcycle;
    fetchcycle = 1;
    decodecycle = 1;
    executioncycle = 1;
    databackcycle = 1;

    printf("Enter num a:");
    scanf("%d", &a);
    printf("Enter num 2:");
    scanf("%d", &b);
    scanf("%d", &choice);

    // Execution Stage
    switch (choice) {
        case 1:
            printf("Performing execution\n");
            rev = a + b;
            break;
        case 2:
            printf("Performing execution \n");
            rev = a - b;
            break;
        case 3:
            printf("Performing execution \n");
            rev = a * b;
            break;
        case 4:
            printf("Performing execution\n");
            rev = a / b;
            break;
    }
   
    printf("Total Cycles: %d", fetchcycle + decodecycle + executioncycle + databackcycle);
     printf("printable execution %d\n", rev);
    return 0;
}
