#include<stdio.h>
int main(){
	int rows, row, space, star;
	printf("Enter rows value: ");
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
