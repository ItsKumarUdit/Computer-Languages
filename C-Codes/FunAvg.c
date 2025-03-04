#include<stdio.h>
int average();

int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	printf("Average:%d",average(n));
	
}

int average(int x)
{
	int count,avg=0;
	for(count=1;count<=x;count++)
	{
		avg+=x/x;
	}
	return avg;
}
