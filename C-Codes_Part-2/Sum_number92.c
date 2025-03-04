#include<stdio.h>
int main()
{
	int n,count,sum=0;
	printf("Give n value: ");
	scanf("%d",&n);
	
	for(count=1; count<=n; count++)
	{
		sum=sum+count;
		printf("\nSum of first %d natural number is %d",count,sum);
	}
	
	return 0;
}
