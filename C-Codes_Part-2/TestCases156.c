#include<stdio.h>
int main()
{
	int t,num;
	printf("Enter Test cases value: ");
	scanf("%d",&t);
	while(t>0)
	{
		printf("\nEnter any number: ");
		scanf("%d",&num);
		if(num%2==0)
		     printf("Even Number");
		else
		     printf("Odd Number");
		t--;
	}
}
