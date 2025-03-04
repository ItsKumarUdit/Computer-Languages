#include<stdio.h>

void main(){
	int rows, col, space, row,num=1;
	printf("Enter rows number: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(space=1; space<row; space++){
			printf(" ");
		}
		for(col=row; col<=rows; col++){
			printf("%d",col-row+1);
			
		}
		printf("\n");
	}
}
