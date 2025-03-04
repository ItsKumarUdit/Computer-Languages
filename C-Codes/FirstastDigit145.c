#include<stdio.h>
int main()
{
	int num,first,last;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	last = num % 10;
	
	for(first = num; first >=10; first /= 10);
	
	printf("First digit is %d and Last digit is %d",first,last);
	
	return 0;
}


