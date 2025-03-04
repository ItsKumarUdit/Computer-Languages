#include<stdio.h>
int main(){
	int row, col, rows;
	printf("Enter rows number: ");
	scanf("%d",&rows);
	for(row=1; row<=rows; row++){
		for(col=1; col<=rows; col++){
			if(row+col>=2*row){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
		
}

