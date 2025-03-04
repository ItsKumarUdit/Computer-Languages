#include<stdio.h>

int FindSum(int *X, int *Y){
	int sum = 0;
	sum = *X + *Y;
	return sum;
}

int main(){
	int a = 9, b = 10;
	int *p = &a, *p1 = &b;
	int R = FindSum(p,p1);
	printf("%d",R);
}
