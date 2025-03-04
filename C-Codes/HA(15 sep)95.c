#include<stdio.h>
int main()
{
	int x,y,sum; //x=Abhi dice outcome & y=Joni dice outcome
	printf("Enter both outcomes(x , y): ");
	scanf("%d%d",&x,&y);
	if(x+y>6)
	{
		printf("GOOD");
	}
	else
	printf("NOT GOOD");
	return 0;
}
