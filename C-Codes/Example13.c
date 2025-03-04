#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d,b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swap a=%d,b=%d",a,b);
}
