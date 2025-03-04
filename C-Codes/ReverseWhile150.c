#include<stdio.h>
int main()
{
	int num,revnum=0,r;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	while(num!=0)
	{
	   r = num % 10;
	   revnum = revnum*10+r;
	   num = num/10;	
	}
	printf("Reverse number of is %d",revnum);
	return 0;
}
