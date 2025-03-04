#include<stdio.h>
int main(){
	int row,col,r,c,sum=0;
	printf("Enter row & col size: ");
	scanf("%d%d",&row,&col);
	int A[row][col];
	printf("\nEnter %d elements in the matrix: ",row*col);
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			scanf("%d",&A[r][c]);
		}
	}
	printf("Given matrix are: \n");
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			printf("%d ",A[r][c]);
		}
		printf("\n");
	}
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			if(r==0 || r == row-1 || c == 0 || c == col - 1){
				continue;
			}
			sum += A[r][c];
		}
	}
	printf("Sum of nondia: %d",sum);
	return 0;
}
