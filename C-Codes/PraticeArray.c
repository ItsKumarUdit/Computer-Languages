#include<stdio.h>
int main(){
	int i, size, sum = 0;
	float avg=0;
	printf("Enter size : ");
	scanf("%d",&size);
	int A[size];
	printf("Enter %d elements in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	printf("\nElements are : ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
	for(i=0; i<size; i++){
		sum += A[i];
	}
	
	avg = sum/size;
	
	printf("sum = %d, Avg = %.2f",sum,avg);
	return 0;
}
