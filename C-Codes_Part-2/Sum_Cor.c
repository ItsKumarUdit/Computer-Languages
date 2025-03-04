#include<stdio.h>
int main(){
	int row, col, r, c, sum = 0;
	printf("Enter row & col size of the Array: ");
	scanf("%d%d",&row,&col);
	int A[row][col];
	printf("Enter %d element in the Array: ",(row*col));
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			scanf("%d",&A[r][c]);
		}
	}
	sum = A[0][0] + A[0][col-1] + A[row-1][0] +  A[row-1][col-1];
	printf("Sum of corners is %d",sum);
	return 0;
}
