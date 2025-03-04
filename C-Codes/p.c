#include<stdio.h>
int main(){
	int A[5] = {10,20,30,40,90};
	int *P=&A,i, sum=0;
	for(i=0; i<5; i++){
		sum += *(P+i);
	}
	printf("\n%d",sum);
}
