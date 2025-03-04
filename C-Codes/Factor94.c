#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter n value: ");
	scanf("%d",&n);
	
	for(count=1; count<=n; count++)
	{
		if(n%count==0)
		printf("%d\n",count);
	}
	return 0;
}
