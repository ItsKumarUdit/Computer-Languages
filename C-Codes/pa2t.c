#include<stdio.h>
int main(){
	int star, space,row, rows;
	printf("Enter rows val: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(space=1; space<=rows-row; space++){
			printf(" ");
		}
		for(star=1; star<=row; star++){
			printf("*");
		}
		printf("\n");
	}
}
