#include<stdio.h>
int main()
{
	float side,area,perimeter;
	printf("Enter any side of a square");
	scanf("%f",&side);
	area=side*side;
	perimeter=4*side;
	printf("area is %f",area);
	printf("perimeter is %f",perimeter);
}
