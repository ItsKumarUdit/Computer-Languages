#include <stdio.h>
#include <math.h>
int main()
{
	float s1, s2, s3, s, perimeter, area;
	printf("Enter the value of all sides of the triangle");
	scanf("%f%f%f",&s1,&s2,&s3);
	perimeter=s1+s2+s3;
	s=perimeter/2;
	area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	printf("perimeter is %f\n",perimeter);
	printf("area is %f",area);
}
