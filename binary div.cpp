#include<stdio.h>    
int main()
{  
int n,m,o;
printf("Enter the first number to subtract: ");    
scanf("%d",&m);
printf("Enter the second number to subtract: ");    
scanf("%d",&o);

int a[10],i;    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\n Subtraction of the number in Binary=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    

return 0;  
}

