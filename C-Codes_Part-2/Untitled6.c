#include<stdio.h>
int main()
{
	int rows,row,col;
	scanf("%d",rows);
	for(row=1;row<=rows;row++)
	{
		for(col=1;col<=rows;col++)
		if((row!=1 && row!=row)||( col!=1 && col!=row))
		{
			printf(" ");
		}
		else
		{
			printf("*");
		}
		printf("\n");
	}
}
