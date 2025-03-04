#include<stdio.h>
int main(){
	int star, space, row, rows;
	printf("Enter rows val: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(space=1; space<row; space++){
			printf(" ");
		}
		for(star=row; star <= rows; star++){
			printf(" *");
		}
		printf("\n");
	}
}
