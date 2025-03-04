#include<stdio.h>

int square(int a){
	int sq = a * a;
	return sq;
}

int main(){
	int a;
	printf("Enter any number: ");
	scanf("%d",&a);
	int R = square(a);
	printf("Square of the given number is : %d",R);
}
