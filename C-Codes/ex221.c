#include<stdio.h>
int main(){
	int rows,row,col,alpha;
	printf("Enter rows value: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=1 , alpha=65; col<=row; col++, alpha++){
			printf("%c ",alpha);
		}
		printf("\n");
	}
	
	}
