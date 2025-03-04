#include<stdio.h>

int main()
{
	int a=90, b=40, c=50;
	printf(" a= %d, b= %d, c=%d",a,b,c);
	printf("\n(a>b) && (a>c) = %d",(a>b) && (a>c) );
	printf("\n(a>b) && (a<c) =%d",(a>b) && (a<c));
	printf("\n(a>b) || (b>c) =%d",(a>b) || (b>c));
	printf("\n(a<b) || (a<c) =%d",(a<b) || (a<c));
	printf("\n(a>b) && (b>c) && (c>a) =%d",(a>b) && (b>c) && (c>a));
	printf("\n(a<b) || (a<c) || (b>c) =%d",(a<b) || (a<c) || (b>c));
}
