#include<stdio.h>
void accept_elements(int rs, int cs, int Ar[][cs])
{
	int r, c;
	for(r=0; r<rs ;r++){
		for (c=0; c<cs; c++){
			scanf("%d",&Ar[r][c]);
		}
	}
	
}
void print_elements(int rs, int cs, int Ar[][cs]){
	int r, c;
	for(r=0; r<rs; r++){
		for (c=0; c<cs; c++){
			printf("%d ", Ar[r][c]);
		}
		printf("\n");
	}
}

void main(){
	int rows, cols, r, c;
	printf("Enter row & col size: ");
	scanf("%d%d",&rows, &cols);
	int A[rows][cols], TA[cols][rows];
	printf("Enter %d elements into the array: ",(rows*cols));
	accept_elements(rows, cols,A);
	
	for(r=0; r<rows; r++){
		for(c=0; c<cols; c++){
			TA[c][r] = A[r][c];
		}
	}
	
	printf("Elements of given array are: \n");
	print_elements(rows, cols, A);
	printf("Elements of Transpose array are: \n");
	print_elements(cols, rows, TA);
}
