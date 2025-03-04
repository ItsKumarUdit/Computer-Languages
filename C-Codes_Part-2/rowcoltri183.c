#include<stdio.h>
void main()
{
	int rows, row, space, star;
	printf("Enter no. of rows: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(space=1; space<=(rows-row); space++){
			printf(" ");
		}
		for(star=1; star<=row; star++){
			printf("*");
		}
		printf("\n");
	}
}
