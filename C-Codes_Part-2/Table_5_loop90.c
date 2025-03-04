#include<stdio.h>
int main()
{
	int n,count,x;
	printf("Enter table number(X): ");
	scanf("%d",&x);
	printf("Enter multiple number(n): ");
	scanf("%d",&n);
	
	for(count=5; count<=(n*5); count++)
	{
	    if(x%5==0)
	    printf("%d\n",count);
	}
	return 0;
	
}
