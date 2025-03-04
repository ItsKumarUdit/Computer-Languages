#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter table number: ");
	scanf("%d",&n);
	
	for(count=1; count<=10; count++)
	{
		printf("%d\n",(n*count));
	}
	return 0;
	
}
