#include<stdio.h>
void main()
{
	int rows, row, col,alpha;
	printf("Enter no. of rows: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=rows, alpha=68; col>=row; col--,alpha--){
			printf("%c ",alpha);
		}
		printf("\n");
	}
}
