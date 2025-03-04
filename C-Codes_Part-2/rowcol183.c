#include<stdio.h>
int main()
{
	int rows, row, col;
	printf("Enter no. of rows: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=1;col<=rows; col++)
		{
			if((row+col) <= rows)
		       printf(" ");
		    else
		       printf("*");
	}
	printf("\n");

}
}
