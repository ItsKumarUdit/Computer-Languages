#include<stdio.h>
int main(){
	int i, size, round, temp;
	printf("Enter the size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	printf("Elements before sorting: ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
	
	for(round=1; round<size; round++){
		for(i=0; i<size-round; i++){
			if(A[i]<A[i+1]){
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
			}
		}
	}
	printf("\nElements after sorting: ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
	return 0;
}
