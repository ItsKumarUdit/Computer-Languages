#include<stdio.h>
int main(){
	int row,col,r,c,sum=0;
	printf("Enter rol & col size of the Matrix: ");
	scanf("%d%d",&row,&col);
	int A[row][col];
	printf("\nEnter %d element in the Matrix: ",(row*col));
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			scanf("%d",&A[r][c]);
		}
	}
	//sum of col side
	for(r=0; r<row; r++){
		sum += A[r][0];
		sum += A[r][col-1];
	}
	//sum of rol side
	for(c=1; c<(col-1); c++){
		sum += A[0][c];
		sum += A[row-1][c];
	}
	printf("\nSum is %d",sum);
}
