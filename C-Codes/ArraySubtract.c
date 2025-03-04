#include<stdio.h>
int main(){
	int size,i;
	printf("Enter size of first array: \n");
	scanf("%d",&size);
	int A[size], B[size], C[size];
	printf("Enter %d elements of first array: \n");
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	printf("Enter %d elements of second array: \n",size);
	for(i=0; i<size; i++){
		scanf("%d",&B[i]);
	}
	
	for(i=0; i<size; i++){
		C[i] = A[i] - B[i];
	}
	printf("\nSubract of two Arrays are : \n");
	for(i=0; i<size; i++){
		printf("%d ",C[i]);
	}
}
