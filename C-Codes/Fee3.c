#include<stdio.h>
int main(){
	int rows, row, col, space;
	printf("Enter rows val: ");
	scanf("%d",&rows);
	for(row=1; row<=rows; row++){\
	    
		for(space=1; space<=rows-row; space++){
			printf("  ");
		}
		for(col=1; col<=row; col++){
			printf("%d ",row+1-col);
		}
		printf("\n");
	}
}
