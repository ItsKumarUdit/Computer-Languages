#include<stdio.h>

int main()
{
	float height,base,area;
	printf("Enter height and base of a triangle");
	scanf("%f%f",&height,&base);
	area=(base*height)/2;
	printf("area is %f",area);
}
