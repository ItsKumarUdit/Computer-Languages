#include<stdio.h>
int main()
{
	int n, count;
    printf("Enter n value: ");
    scanf("%d",&n);
	
	for (count=97; count<=127; count++)
	{
		printf("%d %c\n",count,count);
	}
	return 0;
}
