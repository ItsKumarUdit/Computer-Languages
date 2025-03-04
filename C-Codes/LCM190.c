#include<stdio.h>
int main()
{
	int a,b,count;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	for(count = a>b?a:b; count<=a*b; count=count+(a>b?a:b)){
		if(count%a==0 && count%b==0)
		break;
	}
	printf("LCM is = %d",count);
}
