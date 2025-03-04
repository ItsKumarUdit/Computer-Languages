#include<stdio.h>
int main()
{
	int first, last, num;
	printf("Enter any number of minimum 2 digits: ");
	scanf("%d",&num);
	
	last = num % 10;
	
	for(first=num; first>=10; first/=10);
	
	if(first==last)
	printf("Rainbow number");
	else
	printf("Not a Rainbow number");
	
	return 0;
}
