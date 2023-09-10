#include<stdio.h>
int main(){
	int n,a[10],i;
	printf("emter a hexa decno");
	scanf("%d",&n);
	printf("the binary value is");
	for(i=0;n>0;i++){
		a[i]=n%2;
		n=n/2;
	}

	for(i=i-1;i>=0;i--){
		printf("%d",a[i]);
		
	}
	return 0;
	
}
