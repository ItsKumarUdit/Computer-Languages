#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter n value: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		sum += i*i*i;
	}
	printf("Sum of square of first n natural numbers is  %d",sum);
	return 0;
}
