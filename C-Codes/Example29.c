#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b) && (a>b))
	{
		printf("a is the largest number");
	}
	if((b>c) && (b>a))
	{
		printf("b is the largest number");
	}
	if((c>a) && (c>b))
	{
		printf("c is the largest number");
	}
}
