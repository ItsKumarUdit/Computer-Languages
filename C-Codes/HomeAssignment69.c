#include<stdio.h>
int main()
{
	float loan_amount,interest_paid,interest_percent;
	printf("Enter total loan amount: ");
	scanf("%f",&loan_amount);
	if(loan_amount>=50000 && loan_amount<=100000)
	{
		interest_percent=0.12;
	}
	else if(loan_amount>=100001 && loan_amount<=250000)
	{
		interest_percent=0.14;
	}
	else if(loan_amount>=250001 && loan_amount<=500000)
	{
		interest_percent=0.16;
	}
	else
	{
		printf("Not valid for any interest");
	}
	interest_paid=(loan_amount*interest_percent);
	printf("Interest to be paid everymonth is: %.2f\n",interest_paid);
	
	return 0;
}
