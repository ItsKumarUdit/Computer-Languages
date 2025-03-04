#include<stdio.h>
void main(){
	int A[5] = {1,2,3,4,5};
	int *p = &A;
	int i;
	for(i=0; i<5; i++){
		printf("%d ",*(p+i));
	}
}
