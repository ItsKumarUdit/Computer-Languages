#include<stdio.h>

int digitsum(int a){
	int r, sum=0;
	for(; a != 0; a /= 10){
		r = a % 10;
		sum += r;
	}
	return sum;
}

void main(){
	int num;
	printf("Enter any number ");
	scanf("%d",&num);
	int S = digitsum(num);
	printf("Sum of the digit is %d",S);
}
