#include<stdio.h>

void AcceptData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		scanf("%d",&Ar[i]);
	}
}

int main(){
	int s1,s2,i;
	printf("Enter two sizes of two Array: ");
	scanf("%d%d",&s1,&s2);
	int A[s1],B[s2],C[s1+s2];
	printf("Enter %d elements in the A array: ",s1);
	AcceptData(A,s1);
	printf("\nEnter %d elements in the B array: ",s2);
	AcceptData(B,s2);
	
	for(i=0; i<s1; i++){
		C[i] = A[i];
	}
	for(i=0; i<s2; i++){
		C[i+s1] = B[i];
	}
	printf("Merged array = ");
	for(i=0; i<(s1+s2); i++){
		printf("%d ",C[i]);
	}
	return 0;
}
