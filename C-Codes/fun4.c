#include<stdio.h>

void check(int a){
	if(a%2==0)
	printf("Even");
	else
	printf("Odd");
}

int main(){
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	check(num);
}
