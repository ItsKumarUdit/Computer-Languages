#include<stdio.h>
int main(){
	int row, col, sum = 0, R, C;
	printf("Enter row & col size of the Array: ");
	scanf("%d%d",&row,&col);
	int A[row][col];
	printf("\nEnter %d elements of the Array: ",(row*col));
	for(R=0; R<row; R++){
		for(C=0; C<col; C++){
			scanf("%d",&A[R][C]);
		}
	}
	
	sum = A[0][0] + A[0][col-1] + A[row-1][0] + A[row-1][col-1];
	printf("\nSum is = %d",sum);
}
