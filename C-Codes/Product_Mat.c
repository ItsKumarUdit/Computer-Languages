#include<stdio.h>

void AcceptData(int Rs, int Cs, int Ar[][Cs]){
	int R, C;
	for(R=0; R<Rs; R++){
		for(C=0; C<Cs; C++){
			scanf("%d",&Ar[R][C]);
		}
	}
}

void PrintData(int Rs, int Cs, int Ar[][Cs]){
	int R, C;
	for(R=0; R<Rs; R++){
		for(C=0; C<Cs; C++){
			printf("%d ",Ar[R][C]);
		}
		printf("\n");
	}
}

int main(){
	int R1,C1,R2,C2,R,C,T,Sum;
	printf("\nEnter size of 1st matrix: ");
	scanf("%d%d",&R1,&C1);
	printf("\nEnter size of 2nd matrix: ");
	scanf("%d%d",&R2,&C2);
	
	if(C1 != R2)
	{
		printf("\nMultiplication not possible");
		return;
	}
	int A[R1][C1], B[R2][C2], Product[R1][C2];
	
	printf("\nEnter %d element in the 1st matrix: ",(R1*C1));
	AcceptData(R1,C1,A);
	printf("\nEnter %d element in the 2nd matrix: ",(R2*C2));
	AcceptData(R2,C2,B);
	
	for(R=0; R<R1; R++){
		for(C=0; C<C2; C++){
			Sum=0;
			for(T=0; T<C1; T++){
				Sum += A[R][T] * B[T][C];
			}
			Product[R][C] = Sum;
		}
	}
	printf("\nElements of 1st Matrix: ");
	PrintData(R1,C1,A);
	printf("\nElements of 2nd Matrix: ");
	PrintData(R2,C2,B);
	printf("\nElements of Product Matrix: ");
	PrintData(R1,C2,Product);
}
