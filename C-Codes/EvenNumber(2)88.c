#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter n value: ");
	scanf("%d",&n);
	
	for(count=2; count<=n*2; count+=2)
	{
		printf("%d\n",count);
	}
}
