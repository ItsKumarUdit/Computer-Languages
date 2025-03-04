#include<stdio.h>

int Add(int *a, int *b){
	int sum = *a + *b;
	return sum;
}

int main(){
	int a = 10, b = 20;
	int *p = &a, *p1 = &b;
	int R = Add(p,p1);
	printf("Sum = %d",R);
}
