#include<stdio.h>
int main()
{
	int rows,col,row;
	scanf("%d",&rows);
	for(row=1;row<=rows;row++)
	{
		for(col=1;col<=rows;col++)
		{
			if(col<row)
			{
				printf(" ");
			}
			else
			{
				printf("* ");
			}
		}
			printf("\n");
	}
}
