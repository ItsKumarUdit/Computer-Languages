#include<stdio.h>

int main(){
	int row, rows,col, space, star;
	printf("Enter rows: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(space=row; space<rows; space++){
			printf(" ");
		}
		for(col=1; col<=row; col++){
		   printf("*");	
		}
		
		printf("\n");
	}
}
