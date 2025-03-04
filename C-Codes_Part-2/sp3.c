#include<stdio.h>
int main(){
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	int R = num%10;
	
	if(R%3==0 && R%5==0)
	printf("It is divisible by both 3 & 5");
	else
	printf("Not divisible");
}
