#include<stdio.h>
#include<math.h>
int main()
{
	int n,count;
	printf("Enter n value: ");
	scanf("%d",&n);
	
	printf("Factors of %d are: ",n);
	
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
			}
		}
	}
	return 0;
}
