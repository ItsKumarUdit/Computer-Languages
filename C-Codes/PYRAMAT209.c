#include<stdio.h>
int main(){
	int rows, row, space, star;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(space=1; space<row; space++){
			printf(" ");
		}
		for(star=row; star<rows; star++){
			printf(" *");
		}
		printf("\n");
	}
	return 0;
		
}
