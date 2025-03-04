#include<stdio.h>
int main()
{
	float bill,discount,billpay;
	printf("Enter the bill amount: ");
	scanf("%f",&bill);
	if(bill>=10000)
	{
		discount=bill*0.15;
	}
	else
	{
		discount=bill*0.08;
	}
	billpay=bill-discount;
	printf("Discount is: %f",discount);
	printf("\nBill to pay: %f",billpay);
}
