#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter n values: ");
	scanf("%d",&n);
	
	for(count=n; count>=1; count--)
	{
		printf("%d\n",count);
	}
	return 0;
}
