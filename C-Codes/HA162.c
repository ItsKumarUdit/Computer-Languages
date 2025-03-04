#include<stdio.h>
int main()
{
	int i, a, b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	for(i = a>b?a:b; i <= a*b; i=i+( a>b ? a : b)){
		if(i%a==0 && i%b==0)
		break;
	}
	printf("LCM of given two numbers is %d",i);
	return 0;
	
}
