#include<stdio.h>
int main()
{
	float bill,discount,billpay;
	printf("Enter Bill amount: ");
	scanf("%f",&bill);
	if(bill>=10000)
	{
		discount=bill*0.22;
	}
	else
	{
		discount=bill*0.12;
	}
	billpay=bill-discount;
	printf("Discount is: %f",discount);
	printf("\nBill to pay: %f",billpay);
}
