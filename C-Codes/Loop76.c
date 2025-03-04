#include<stdio.h>
int main()
{
	int n,c=0;
	while(n<3000)
	{
		printf("\nEnter your calories burned: ");
		scanf("%d",&n);
		c++;
	}
	printf("You have burned enough calories in %d attempts",c);
	return 0;
}
