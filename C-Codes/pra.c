#include<stdio.h>
int main(){
	int size, i;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	int sum=0;
	for(i=0; i<size; i++){
		sum += A[i];
	}
	int Avg = 0;
	Avg = sum/size;
	int h = A[0];
	for(i=0; i<size; i++){
		if(h<A[i])
		h=A[i];
	}
	
	printf("Sum is %d",sum);
	printf("\nAvg is %d",Avg);
	printf("\nHighest is %d",h);
}
