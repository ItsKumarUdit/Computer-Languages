#include<stdio.h>
int main(){
	int star, space,row, rows;
	printf("Enter rows val: ");
	scanf("%d",&rows);
	
	for(row=0; row<rows; row++){
		for(space=0; space<row; space++){
				printf(" ");
		 
			}
			 
		for(star=1; star<=rows-row; star++){
			 printf("*");		
		}
	printf("\n");	 
	}
}
