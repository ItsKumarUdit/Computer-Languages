#include<stdio.h>
int main()
{
	float mrp_book,discount=0,sp_book;
	printf("Enter the MRP of the book: ");
	scanf("%f",&mrp_book);
	if(mrp_book>=800)
	{
		discount=mrp_book*15/100;
	}
	sp_book=mrp_book-discount;
	printf("Discount is : %f",discount);
	printf("\nSelling Price is : %f",sp_book);
}
