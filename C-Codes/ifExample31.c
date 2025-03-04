#include<stdio.h>
int main()
{
	float bill,discount=0,billpay;
	printf("Enter the total bill amount : ");
	scanf("%f",&bill);
	if(bill>=5000)
	{
		discount=bill*0.1;
	}
	billpay=bill-discount;
	printf("Discount is : %f",discount);
	printf("\nBill to pay : %f",billpay);
}
