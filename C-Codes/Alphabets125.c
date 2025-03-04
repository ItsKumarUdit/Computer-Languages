#include<stdio.h>
int main()
{
	int n, count;
	printf("Enter n value: ");
	scanf("%d",&n);
	
	for (count=65; count<65+n; count++)
	{
		printf("%c ",count);
	}
	return 0;
}
