#include<stdio.h>
int main(){
	int size,i;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	int Max = A[0];
	for(i=0; i<size; i++){
		if(A[i]>Max){
			Max = A[i];
		}
	}
	printf("\nMax val is %d",Max);
}
