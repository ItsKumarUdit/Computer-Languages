#include<stdio.h>

void Print_Accept_Array(){
	int size,i;
	printf("\nEnter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	for(i=0; i<size; i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nElements in the Array are: \n");
	for(i=0; i<size; i++)
	{
		printf("%d ",A[i]);
	}
}
int main(){
	int T;
	printf("Enter number of Test cases: ");
	scanf("%d",&T);
	while(T--) // for(i=0; i<T; i++) is also right;
	{
		Print_Accept_Array();
	}
}
