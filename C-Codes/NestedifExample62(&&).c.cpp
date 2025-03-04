#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three number : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("First number is greatest");
    }
    if(b>a && b>c)
    {
    	printf("Second number is greatest");
	}
	if(c>a && c>b)
	{
		printf("Third number is greatest");
	}

}
