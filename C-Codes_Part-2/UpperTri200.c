#include<stdio.h>
int main()
{
	int row,col,rows;
	printf("Enter rows number: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=rows; col>=row; col--){
			printf("%d ",col);
		}
		printf("\n");
	}
	return 0;
}
