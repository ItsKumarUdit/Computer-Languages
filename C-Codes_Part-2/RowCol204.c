#include<stdio.h>
int main(){
	int row, col, rows;
	printf("Enter rows value: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=1; col<=rows; col++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
