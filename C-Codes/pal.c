#include<stdio.h>
int main(){
	int num, num1, revnum = 0; 
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(num1=num; num1 != 0; num1/=10){
		int r = num1 % 10;
		revnum = revnum*10 + r;
	}
	if(num==revnum){
		printf("Palindrome number");
	}
	else {
		printf("Not a Palindrome number");
	}
}
