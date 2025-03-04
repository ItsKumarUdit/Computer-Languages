#include<stdio.h>
int main(){
	int num,num1,revnum=0,r;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(num1=num; num1!=0; num1/=10){
		r=num1%10;
		revnum=revnum*10+r;
	}
	if(revnum==num)
	printf("Palindrome number");
	else
	printf("Not a Palindrome number");
	
	return 0;
}
