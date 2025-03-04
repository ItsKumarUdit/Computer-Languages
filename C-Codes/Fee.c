#include<stdio.h>
int main(){
	int row, col, space, rows;
	printf("Enter rows number: ");
	scanf("%d",&rows);
	for(row=1; row<=rows; row++){
		
		for(space=1; space<=rows-row; space++){
			printf(" ");
		}
		
		for(col=1; col<=row; col++){
			printf("%d ",row);
			 
		}
		printf("\n");
		
	}
}
