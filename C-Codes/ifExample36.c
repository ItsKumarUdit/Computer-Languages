#include<stdio.h>
int main()
{
	float mrp_book,discount,bill_pay;
	printf("Enter the mrp of the book: ");
	scanf("%f",&mrp_book);
	if(mrp_book>=800)
	{
		discount=mrp_book*0.2;
	}
	else
	{
		discount=mrp_book*0.1;
	}
	bill_pay=mrp_book-discount;
	printf("Discount is: %f",discount);
	printf("\n[]Bill to pay: %f",bill_pay);
}
