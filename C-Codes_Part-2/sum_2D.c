#include<stdio.h>
int main(){
	int row,col,r,c;
	printf("Ente row & col size of 2D array: ");
	scanf("%d%d",&row,&col);
	int A[row][col], B[row][col], S[row][col];
	printf("\nEnter %d elements of the 1st Array: ",(row*col));
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			scanf("%d",&A[r][c]);
		}
	}
	printf("\nEnter %d elements of the 2nd Array: ",(row*col));
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			scanf("%d",&B[r][c]);
		}
	}
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			S[r][c] = A[r][c] + B[r][c];
		}
	}
	printf("\nSum of the given 2D arrays are : ");
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			printf("%d ",S[r][c]);
		}
		printf("\n");
	}
	
}
