#include <stdio.h>
int main() {
    int n, a[10], m, i;
    printf("Enter the hexadecimal number: ");
    scanf("%x", &n);
    m = n; // Save the decimal value in variable m
    printf("Decimal value: %d\n", m);
    for (i = 0; m > 0; i++) {
        a[i] = m % 2;
        m = m / 2;
    }
    printf("Binary of Given Number is: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }
    return 0;
}
///or
/*
 * C Program to Convert Hexadecimal to Binary
 */
#include <stdio.h>
#define MAX 1000
 
int main()
{
    char binarynum[MAX], hexa[MAX];
    long int i = 0;
 
    printf("Enter the value for hexadecimal ");
    scanf("%s", hexa);
    printf("\n Equivalent binary value: ");
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            return 0;
        }
        i++;
    }
    return 0;
}
