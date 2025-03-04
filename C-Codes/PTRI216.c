#include<stdio.h>
#include<math.h>
int main(){
	int rows, row, col, space, coef;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(row=0; row<rows; row++){
		for(space=row; space<rows; space++){
			printf(" ");
		}
		for(col=0; col<=row; col++){
			coef=tgamma(row+1)/(tgamma(col+1)*tgamma(row-col+1));
			printf("%d ",coef);
		}
		printf("\n");
	}
}
