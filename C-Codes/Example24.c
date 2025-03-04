#include<stdio.h>

int main()
{
	int a=90;
	printf("a=%d",a);
	a+=10;
	printf("\nValue of a after adding 10 %d",a);
	a-=10;
	printf("\nValue of a after subtracting 10 %d",a);
	a*=10;
	printf("\nValue of a after multiplying 10 %d",a);
	a/=10;
	printf("\nValue of a after division quotient 10 %d",a);
	a%=10;
	printf("\nValue of a after division remained 10 %d",a);
}
