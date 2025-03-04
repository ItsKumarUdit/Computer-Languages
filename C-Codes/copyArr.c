#include<stdio.h>
int main(){
	int size,i;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size], B[size];
	printf("Enter %d element in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	printf("Given Array are: ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
	for(i=0; i<size; i++){
		B[i] = A[i];
	}
	printf("\nDuplicate Array are: ");
	for(i=0; i<size; i++){
		printf("%d ",B[i]);
}
}
