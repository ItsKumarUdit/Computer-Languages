#include<stdio.h>
int main(){
	int size, i, j, temp;
	printf("Enter size of the array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	for(i=1; i<size; i++){
		temp = A[i];
		for(j=i; j>0 && temp<A[j-1]; j--){
			A[j] = A[j-1];
		}
		A[j] = temp;
	}
	printf("\nElements after sorting : ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
}
