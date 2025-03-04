#include<stdio.h>

int Sum_Array(int Ar[], int N){
	
		if(N==-1)
		return 0;
		else
		return Ar[N] + Sum_Array(Ar,N-1);
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
	int R = Sum_Array(A,size-1);
	printf("Sum of Array is = %d",R);
}
