#include<stdio.h>
int main()
{
	int row, col, rows;
	printf("Enter rows number: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=1; col<=row; col++){
			printf("%d ",col*5);
		}
		printf("\n");
	}
	return 0;
}
