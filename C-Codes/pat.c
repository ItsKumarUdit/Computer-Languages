#include<stdio.h>
int main(){
	int row, col, rows;
	printf("Enter rows val: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=1; col<=(rows+1-row); col++){
			printf(" *");
		}
		printf("\n");
	}
}
