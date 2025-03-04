#include<stdio.h>
int main(){
	int i, size;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size], B[size], C[size];
	printf("\nEnter %d elements in 1st Array: ",size);
	for(i=0; i<size; i++){
	scanf("%d",&A[i]);
    }
    printf("\nEnter %d elements in 2nd Array: ",size);
	for(i=0; i<size; i++){
	scanf("%d",&B[i]);
    }
    printf("\nSum of given 2 Arrays are: ");
    for(i=0; i<size; i++){
    	C[i] = A[i] + B[i];
	}
	for(i=0; i<size; i++){
	printf("\n%d ",C[i]);
    }
}
