#include<stdio.h>
int main(){
	int row, col, rows, num = 1;
	printf("Enter rows number: ");
	scanf("%d",&rows);
	
	for(row=0; row<rows; row++){
		for(col=0; col<rows; col++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
