#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter any two number: ");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("The greater number is: %d",num1);
	}
	else
	{
		printf("The greater number is: %d",num2);
	}
}
