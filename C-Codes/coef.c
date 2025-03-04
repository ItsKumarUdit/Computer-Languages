#include<stdio.h>
#include<math.h>
int main(){
	int row, col, rows, space, coef;
	printf("Enter rows number: ");
	scanf("%d",&rows);
	
		for(row=0; row<rows; row++){
			for(space=row; space<rows; space++){
				printf(" ");
			}
		    for(col=0; col<=row; col++){
		    	coef = tgamma(row+1)/(tgamma(col+1)*tgamma(row-col+1));
		    	printf("%d ",coef);
			}
			printf("\n");
		}
	
}
