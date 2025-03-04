#include<stdio.h>
int main()
{
	int A[5] = {10,20,30,40,50};
	int *p = &A,i,sum=0;
	printf("Element of Array are \n");
	for(i=0; i<5; i++){
		sum += *(p+i);
	}
	printf("Sum is %d",sum);
}
