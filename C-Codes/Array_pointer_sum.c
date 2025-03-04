#include<stdio.h>
int main(){
	int A[5] = {5,5,5,5,5};
	int i, sum = 0;
	int *p = &A;
	for(i=0; i<5; i++){
		sum += *(p+i);
	}
	printf("Sum = %d",sum);
}
