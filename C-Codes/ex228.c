#include<stdio.h>
int main(){
	int rows, row, col;
	printf("Enter rows value: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=1; col<=row; col++){
			printf(" *");
		}
		printf("\n");
	}
	for(row=1; row<=rows; row++){
		for(col=1; col<=(rows-row); col++){
			printf(" *");
		}
		printf("\n");
	}
	return 0;
	
}
