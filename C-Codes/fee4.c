#include<stdio.h>
int main(){
	int rows, row, col, num=1;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=1; col<=row; col++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
