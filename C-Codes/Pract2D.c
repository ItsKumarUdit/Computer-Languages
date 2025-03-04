#include<stdio.h>

void AcceptData(int rs, int cs, int Ar[][cs]){
	int R,C;
	for(R=0; R<rs; R++){
		for(C=0; C<cs; C++){
			scanf("%d",&Ar[R][C]);
		}
	}
}
void PrintData(int rs, int cs, int Ar[][cs]){
	int R,C;
	for(R=0; R<rs; R++){
		for(C=0; C<cs; C++){
			printf("\n%d ",Ar[R][C]);
		}
	}
}

int main(){
	int row, col;
	printf("Enter row & col size of the Array: ");
	scanf("%d%d",&row,&col);
	int A[row][col];
	printf("\nEnter %d elements in the Array: ",(row*col));
	AcceptData(row,col,A);
	printf("Elements are : ");
	PrintData(row,col,A);
}
