#include<stdio.h>
int main(){
	float Area = 0, perimeter, Rad;
	printf("Enter radius of the circle: ");
	scanf("%f",&Rad);
	Area = 3.14*Rad*Rad;
	perimeter = 2*3.14*Rad;
	printf("Area is = %.2f",Area);
	printf("\nPerimeter is  = %.2f",perimeter);
}
