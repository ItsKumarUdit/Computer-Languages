#include<stdio.h>
int main(){
	int size,i,round,temp;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("Enter %d elements in the array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	
	printf("Elements before sorting : ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
	
	for(round=1; round<size; round++){
		for(i=0; i<size-round; i++){
			if(A[i]>A[i+1]){
			temp=A[i];
			A[i]=A[i+1];
			A[i+1]=temp;	
			}
		}
	}
	printf("\nElements after sorting: ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
}
