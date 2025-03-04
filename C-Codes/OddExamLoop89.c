#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter n value: ");
	scanf("%d",&n);
	
	for(count=1; count<=n*3; count+=3)
	{
		printf("%d\n",count);
	}
}
