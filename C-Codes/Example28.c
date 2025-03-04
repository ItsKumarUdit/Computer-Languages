#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the number of apples and the number of beggars");
	scanf("%d%d",&x,&y);
	if(x%y==0)
	{
		printf("Can be distributed");
	}
	else 
	{
		printf("can't be distributed");
	}
}
