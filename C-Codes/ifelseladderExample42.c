#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number upto five digit: ");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("Please type natural Number");
	}
	else if(num>=0 && num<=9)
	{
		printf("Number has one digit");
	}
	else if(num>=10 && num<=99)
	{
		printf("Number has two digit");
	}
	else if(num>=100 && num<=999)
	{
		printf("Number has three digit");
	}
	else if(num>=1000 && num<=9999)
	{
		printf("Number has four digit");
	}
	else if(num>=10000 && num<=99999)
	{
		printf("Number has five digit");
	}
	else
	{
		printf("Number has more than five digit");
	}
}
	
