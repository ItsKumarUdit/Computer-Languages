#include<stdio.h>
void main()
{
	int num, digitcount=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for (; num>0; num=num/10)
	{ 
	    digitcount++;
	}
	printf("Number has %d digits",digitcount);
	
}

