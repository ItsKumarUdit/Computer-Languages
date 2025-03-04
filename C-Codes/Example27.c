#include<stdio.h>
int main()
{
	int a;
	printf("Enter the points of level one:");
	scanf("%d",&a);
	if (a>70)
	{
		printf("He is eligible for second level");
	}
	else
	{
		printf("He isn't eligible for second level");
		printf("\nHe need %d points more",(70-a));
	}
}
