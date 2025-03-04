#include<stdio.h>
int main()
{
	int num, revnum = 0, num1, r;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(num1=num; num1>0; num1/=10){
		r = num1 % 10;
		revnum = revnum * 10 + r;
	}
	if(num==revnum)
		printf("Number is Palindrome");
		else
			printf("Not a Palindrome");
		
	
	return 0;
}
