#include<stdio.h>
void main()
{
	char alpha;
	printf("Enter any Aplhabet : ");
	scanf("%c",&alpha);
	if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
	{
		printf("VOWEL");
	}
	else
	{
		printf("NOT VOWEL");
	}
	
}
