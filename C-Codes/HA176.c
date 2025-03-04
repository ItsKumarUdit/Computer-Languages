#include<stdio.h>
int main()
{
	int num,a=0,b=1,i,c=0;
	printf("Enter number of term: ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		printf("%d ",a);
		c = a + b;
		a=b;
		b=c;
	}
}
