#include<stdio.h>
int main()
{
	int p;
	printf("Enter the points : ");
	scanf("%d",&p);
	if(p>50)
	{
		if(p<100)
		printf("You are geting a t-shirts");
		else
		printf("You are getting a pen");
	}
	else
	printf("You are getting a dairy");
}
