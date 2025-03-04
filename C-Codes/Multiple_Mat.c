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
			printf("%d ",Ar[R][C]);
		}
		printf("\n");
	}
}
int main(){
	int R1,C1,R2,C2,R,C,T,sum;
	printf("Enter row and col size of 1st mat: \n");
	scanf("%d%d",&R1,&C1);
	printf("\nEnter row and col size of 2nd mat: \n");
	scanf("%d%d",&R2,&C2);
	
	
	if(C1 != R2){
		printf("\nMultiplication not possible\n");
		return;
		
	}
	int A[R1][C1], B[R2][C2], P[R1][C2];
	printf("Enter %d elements of 1st Mat: \n",(R1*C1));
	AcceptData(R1,C1,A);
	printf("Enter %d elements of 2nd Mat: \n",(R2*C2));
	AcceptData(R2,C2,B);
	
	for(R=0; R<R1; R++){
		for(C=0; C<C2; C++){
			sum = 0;
			for(T=0; T<C1; T++){
				sum += A[R][T]*B[T][C];
			}
			P[R][C]=sum;
		}
	}
	printf("\nMat one data: ");
	PrintData(R1,C1,A);
	printf("\nMat Second data: ");
	PrintData(R2,C2,B);
	printf("\nMat Product data: ");
	PrintData(R1,C2,P);
}
