#include<stdio.h>
int main()
{
	int row, col, rows, alpha;
	printf("Enter rows number: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=1, alpha=65; col<=row; col++,alpha++){
			printf("%c ",alpha);
		}
		printf("\n");
	}
	return 0;
}
