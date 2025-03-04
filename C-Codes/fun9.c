#include<stdio.h>

void LargestElement(int A[], int size){
	int i, Largest = A[0];
	for(i=1; i<size; i++){
		if(A[i] > Largest){
			Largest = A[i];
		}
	}
	printf("\nLargest element is = %d",Largest);
}

int main(){
	int size, i;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	LargestElement(A,size);
}
