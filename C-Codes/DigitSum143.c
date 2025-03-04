#include<stdio.h>
void main()
{
	int num, digitcount=0,rem,sum=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for (; num>0; num=num/10)
	{ 
	    digitcount++;
	    rem=num%10;
	    sum+=rem;
	}
	printf("Number has %d digits",digitcount);
	printf("\nSum of digits is: %d",sum);
}

