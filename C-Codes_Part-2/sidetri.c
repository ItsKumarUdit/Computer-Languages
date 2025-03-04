#include<stdio.h>
int main(){
	int rows, space, star, col, row;
	printf("Enter rows val: ");
	scanf("%d",&rows);
	for(row=1; row<=rows; row++){
		for(space=0; space<row; space++){
			printf(" ");
		}
		for(star=1; star<=rows+1-row; star++){
			printf("*");
		}
		printf("\n");
	}
}
