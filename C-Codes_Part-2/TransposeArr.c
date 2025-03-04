#include<stdio.h>

void AcceptData(int rs, int cs, int Ar[][cs]){
	int R, C;
	for(R=0; R<rs; R++){
		for(C=0; C<cs; C++){
			scanf("%d",&Ar[R][C]);
		}
	}
}
void PrintData(int rs, int cs, int Ar[][cs]){
	int R, C;
	for(R=0; R<rs; R++){
		for(C=0; C<cs; C++){
			printf("%d ",Ar[R][C]);
		}
		printf("\n");
	}
}

int main(){
	int row, col, R, C;
	printf("Enter row & col size of Array: \n");
	scanf("%d %d",&row, &col);
	int A[row][col], AT[col][row];
	printf("\nEnter %d elements in the Array: \n",(row*col));
	AcceptData(row, col, A);
	
	for(R=0; R<row; R++){
		for(C=0; C<col; C++){
			AT[C][R] = A[R][C];
		}
	}
	printf("\nElements before transposing: ");
	PrintData(row,col,A);
	printf("\nElements after transposing: ");
	PrintData(col,row,AT);
	
	if(A[row][col] == AT[col][row]){
		printf("\nSymmetric");
	}
	else{
		printf("Not symmetric");
	}
}
