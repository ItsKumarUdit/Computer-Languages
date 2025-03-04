#include<stdio.h>
#include<math.h>
int main()
{
	int a,b=2,cube,power;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a%2==0)
	{
		power=pow(a,b);
		printf("It is a even number, so square of it is %d",power);
	}
	else
	{
		cube=a*a*a;
		printf("Not an even number, so cube of it is %d",cube);
	}
}
