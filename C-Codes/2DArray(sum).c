#include<stdio.h>
int main(){
	int row, col, r, c, sum = 0;
	printf("Enter the number of the row and col of the 2D array: ");
	scanf("%d%d",&row, &col);;
	int A[row][col];
	
	printf("Enter %d elements of the 2D array: ",(row*col));
	for(r=0; r<row; r++){
		printf("\nEnter row %d elements: ",r+1);
		for(c=0; c<col; c++){
			scanf("%d",&A[r][c]);
		}
	}
	printf("\nElements of 2D array are: ");
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			printf("%d ",A[r][c]);
			sum += A[r][c];
		}
		printf("\n");
	}
	printf("Sum is %d",sum);
	return 0;
	
}
