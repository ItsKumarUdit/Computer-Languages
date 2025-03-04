#include<stdio.h>
int main(){
	int size,i,j,temp;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("Enter elements: ");
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	for(i=0; i<size-1; i++){
		for(j=0; j<size-1; j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("The Array after sorting: ");
	for(i=0; i<size; i++)
	{
		printf(" %d",A[i]);
	}
}
