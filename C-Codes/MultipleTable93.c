#include<stdio.h>
int main()
{
	int n,count,table;
	printf("Enter n value: ");
	scanf("%d",&n);
	
	for(count=1; count<=10; count++)
	{
		table=count*n;
		printf("\n%d * %d = %d",n,count,table);
	}
	return 0;
}
