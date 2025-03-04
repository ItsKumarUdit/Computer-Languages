#include<stdio.h>

void AcceptData(int rs, int cs, int Ar[][cs]){
	int R,C;
	for(R=0; R<rs; R++){
		for(C=0; C<cs; C++){
			scanf("%d",&Ar[R][C]);
		}
		printf("\n");
	}
}
void SumData(int rs, int cs, int Ar[][cs], int Ar1[][cs],int Ar2[][cs]){
	int R,C;
	printf("\nSum of elements of the 2D Array are : \n");
	for(R=0; R<rs; R++){
		for(C=0; C<cs; C++){
			if(Ar[R][C]==Ar1[R][C])
		     Ar2[R][C] = Ar[R][C] + Ar1[R][C];
		     printf("%d ",Ar[R][C]);
		}
		
	}
	
	
}
void PrintData(int rs, int cs, int Ar[][cs]){
	int R,C;
	for(R=0; R<rs; R++){
		for(C=0; C<cs; C++){
			printf("%d ",Ar[R][C]);
        }
        printf("\n");
    }
}
int main(){
	int row,col,row1,col1;
	printf("Enter row & col size of Array: \n");
	scanf("%d%d",&row,&col);
	int A[row][col], B[row][col], C[row][col];
	printf("\nEnter %d element of 1st Array: \n",(row*col));
	AcceptData(row,col,A);
	printf("\nEnter %d element of 2nd Array: \n",(row*col));
	AcceptData(row,col,B);
	SumData(row,col,A,B,C);
	
}
