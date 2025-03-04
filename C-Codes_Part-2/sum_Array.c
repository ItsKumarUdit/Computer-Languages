#include<stdio.h>

void AcceptData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		scanf("%d",&Ar[i]);
	}
}

int main(){
	int size,i;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size],B[size],C[size];
	printf("Enter %d elements in the A array: ",size);
	AcceptData(A,size);
	printf("\nEnter %d elements in the B array: ",size);
	AcceptData(B,size);
	
	for(i=0; i<size; i++){
		C[i] = A[i] + B[i];
	}
	printf("\nSum of both Arrays are: ");
	for(i=0; i<size; i++){
		printf("%d ",C[i]);
	}
	return 0;
}
