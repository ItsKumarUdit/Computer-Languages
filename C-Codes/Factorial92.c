#include<stdio.h>
int main()
{
	int n,count,fact=1;
	printf("Give n value: ");
	scanf("%d",&n);
	
	for(count=1; count<=n; count++)
	{
		fact=fact*count;
	}
	printf("\nFactorial of %d number is %d",n,fact);
	return 0;
}
