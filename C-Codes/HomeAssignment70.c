#include<stdio.h>
int main()
{
	float temp;
	printf("Enter Temperature(C) : ");
	scanf("%f",&temp);
	if(temp<0)
	{
		printf("Freezing Weather");
	}
	else if(temp<10)
	{
		printf("Very Cold Weather");
	}
	else if(temp<20)
	{
		printf("Cold Weather");
	}
	else if(temp<30)
	{
		printf("Normal Weather");
	}
	else if(temp<40)
	{
		printf("Its Hot Weather");
	}
	else
	{
		printf("Its Very Hot Weather");
	}
	return 0;
}
