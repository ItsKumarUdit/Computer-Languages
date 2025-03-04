#include<stdio.h>

int sum(int a, int b){
	int sum = 0;
	sum = a + b;
	return sum;
}

int main(){
	int a = 10, b = 20;
	int R = sum(a,b);
	printf("Sum = %d",R);
}
