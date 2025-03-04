#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a,b values:");
	scanf("%d%d",&a,&b);
	if(a-b==0)
	{
		printf("Both numbers are equal");
	}
	if(a-b!=0)
	{
		printf("Both are different");
	}
}
