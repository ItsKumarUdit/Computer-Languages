#include<stdio.h>
int main(){
	int rows, row, col;
	char Alpha;
	printf("Enter rows number: ");
	scanf("%d",&rows);
	for(row=1 ; row<=rows; row++){
		for(col=1, Alpha=97; col<=row; col++,Alpha++){
			printf("%c ",Alpha);
		}
		printf("\n");
	}
}
