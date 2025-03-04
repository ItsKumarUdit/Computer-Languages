#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter table number: ");
	scanf("%d",&n);
	
	for(count=1; count<=(n*10); count++)
	{
		if(count%5==0)
		printf("%d\n",count);
	}
	return 0;
	
}
