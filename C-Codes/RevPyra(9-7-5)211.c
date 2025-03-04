#include<stdio.h>
int main(){
	int rows, row, space, star;
	printf("Enter rows number: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(space=1; space<row; space++){
			printf(" ");
		}
			for(star=row; star<=2*rows-row; star++){
				
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}
