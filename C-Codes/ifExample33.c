#include<stdio.h>
int main()
{
	float billamount,discount=0,bill_pay;
	printf("Enter the Bill amount: ");
	scanf("%f",&billamount);
	if(billamount>=2000)
	{
		discount=billamount*22/100;
	}
	bill_pay=billamount-discount;
	printf("Discount is: %f",discount);
	printf("\nBill to pay is: %f",bill_pay);
}
