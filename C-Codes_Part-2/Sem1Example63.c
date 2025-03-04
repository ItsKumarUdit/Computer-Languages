#include<stdio.h>
int main()
{
	char gender;
	int age;
	float premium,net_premium,discount,dis_percent;
	
	printf("Enter gender(M/F),age,premium : ");
	scanf("%s%d%f",&gender,&age,&premium);
	
	if(gender=='M' || gender=='m')
	{
		if(age<35)
		{
			dis_percent=0.20;
		}
		else
		{
			dis_percent=0.25;
		}
	}
	else 
	{
		if(age<35)
		{
		    dis_percent=0.25;
		}
		else
		{
			dis_percent=0.35;
		}
	}
	net_premium=premium*dis_percent;
	printf("Discount is : %f",net_premium);
}
