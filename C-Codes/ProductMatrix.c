#include<stdio.h>

void AcceptData(int Rs, int Cs, int Ar[][Cs]){
	int R,C;
	for(R=0; R<Rs; R++){
		for(C=0; C<Cs; C++){
			scanf("%d",&Ar[R][C]);
		}
	}
}
void PrintData(int Rs, int Cs, int Ar[][Cs]){
	int R,C;
	for(R=0; R<Rs; R++){
		for(C=0; C<Cs; C++){
			printf("%d ",Ar[R][C]);
		}
		printf("\n");
	}
}

void main(){
	int R1,C1, R2,C2, R,C, T, sum;
	printf("Enter row & col size of 1st Matrix: ");
	scanf("%d%d",&R1,&C1);
	printf("\nEnter row & col size of 2nd Matrix: ");
	scanf("%d%d",&R2,&C2);
	
	if(C1 != R2){
		printf("Product not Possible: ");
		return;
	}
	
	int A[R1][C1], B[R2][C2], Product[R1][C2];
	printf("Enter %d elements into 1st matrix: ",(R1*C1));
	AcceptData(R1,C1,A);
	printf("\nEnter %d elements into 2nd matrix: ",(R2*C2));
	AcceptData(R2,C2,B);
	
	for(R=0; R<R1; R++){
		for(C=0; C<C2; C++){
			sum = 0;
			for(T=0; T<C1; T++){
				sum += A[R][T] * B[T][C];
			}
			Product[R][C] = sum;
		}
	}
	printf("\nElements of 1st Matrix: \n");
	PrintData( R1, C1, A);
	printf("\nElements of 2nd Matrix: \n");
	PrintData( R2, C2, B);
	printf("\nElements of Product Matrix: \n");
	PrintData( R1, C2, Product);
}
