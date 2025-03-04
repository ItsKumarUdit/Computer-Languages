#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number: ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Number is divisible by 2 ");
	}
	else
	{
		printf("Not divisible by 2");
	}
}
