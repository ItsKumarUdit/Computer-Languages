#include<stdio.h>
int main(){
	int rows, row, space, col;
	char ch = 'A';
	printf("Enter rows val: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(space=1; space<rows+1-row; space++){
			printf(" ");
		}
		for(col=1; col<=row; col++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
