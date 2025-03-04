#include<stdio.h>
void main(){
	int size, i, j, temp, min;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	
	printf("\nEnter %d elements in the Array: ",size);
	 for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	printf("\nElements before sorting: ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
	for(i=0; i<size; i++){
		min = i;
		for(j=i+1; j<size; j++){
			if(A[j]<A[min]){
				min=j;
			}
		}
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
	printf("\nElements After sorting: ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
}
