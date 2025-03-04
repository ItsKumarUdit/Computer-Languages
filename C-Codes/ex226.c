#include<stdio.h>

int main(){
	int rows, row, space, star;
	printf("Enter rows value: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(space=row; space<rows; space++){
			printf(" ");
		}
		for(star=1; star<2*row; star++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
