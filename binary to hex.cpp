#include <stdio.h>
 
int main()
{
    long int binary, hex = 0,n, base = 1, rev;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binary);
    while (binary != 0)
    {
        rev = binary % 10;
        hex = hex + rev * base;
        base= base* 2;
        binary=n;
        n = n / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hex);
    return 0;
}
