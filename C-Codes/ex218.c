#include<stdio.h>

int main(){
	int a=0, b=1, c=0, n, count;
	printf("Enter n value: ");
	scanf("%d",&n);
	
	for(count=1; count<=n; count++){
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
}
