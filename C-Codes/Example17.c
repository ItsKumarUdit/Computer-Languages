#include<stdio.h>
int main()
{
	float l, b, p, cost ;
	printf("Enter Lenght and Breadth of the field");
	scanf("%f%f",&l,&b);
	p = 2*(l+b);
	cost = p*10;
	printf("cost for the fencing %f",cost);
}
