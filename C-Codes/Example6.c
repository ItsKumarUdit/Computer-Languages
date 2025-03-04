#include<stdio.h>
int main()
{
	float Radius,Area,Perimeter;
	printf("Write the Radius of the circle");
	scanf("%f",&Radius);
	Area=3.14*Radius*Radius;
	Perimeter=2*3.14*Radius;
	printf("Area is %f",Area);
	printf("\nPerimeter is %f",Perimeter);
}
