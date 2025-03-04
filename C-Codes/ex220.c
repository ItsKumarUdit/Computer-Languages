#include<stdio.h>
int main(){
	int rows, row, col;
	printf("Enter rows value: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=1; col<=rows; col++){
			if(row==col || row+col==rows+1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
