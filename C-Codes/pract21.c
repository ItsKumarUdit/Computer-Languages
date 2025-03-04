#include<stdio.h>
#include<math.h>
int main()
{
	int factsum=0,i,n;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(i==n/i)
			{
				factsum+=i;
			}
			else
			{
				factsum+=i+n/i;
			}
		}
	}
	printf("%d\n",factsum);
	if(factsum==2*n)
	{
		printf("yes pew");
	}
	else
	{
		printf("no");
	}
}
