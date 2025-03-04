#include<stdio.h>
#include<math.h>
int main()
{
	int n,count,sum;
	printf("Enter n value: ");
	scanf("%d",&n);
	
	printf("sum of are: ",sum);
	
	for(count=1; count<=sqrt(n); count++)
	{
		if(n%count==0)
		{
			if(count==n/count)
			{
			  	 printf("%d", count);
			}
			else
			{
				 printf(" %d %d", count, n/count );
				 sum=count+(n/count);
			}
		}
	}
	return 0;
}
