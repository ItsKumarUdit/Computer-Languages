#include<stdio.h>
int main()
{
	int num,revnum=0,r,num1;
	printf("Enter any number: ");
	scanf("%d",&num);
	num1 = num;
	while(num1!=0)
	{
	   r = num1 % 10;
	   revnum = revnum * 10 + r;
	   num1 /= 10;	
	}
	if(num == revnum)
		printf("It's a Palindrome number");
	else 
	  printf("It's not a Palindrome number");
	
	return 0;
}
