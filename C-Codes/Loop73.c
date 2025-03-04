#include<stdio.h>
int main()
{
	int pt,c;
	pt=0;
	c=0;
	
	while(pt<100)
	{
		printf("Enter points: ");
		scanf("%d",&pt);
		c++;
	}
	printf("You won the game after %d attempts",c);
	return 0;
}
