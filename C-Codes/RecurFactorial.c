#include<stdio.h>

int fact(int n){
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}

int main(){
	int Num;
	printf("ENTER NUMBER: ");
	scanf("%d",&Num);
	
	int R = fact(Num);
	printf("Factorial is  = %d",R);
}

