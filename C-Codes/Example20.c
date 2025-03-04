#include<stdio.h>

int main()
{
	float r, l, b, sqmeter, area_ground, area_pitch, grassed_area, total_cost;
	printf("Enter the radius of the ground and lenght,breadth of the pitch,sqmeter");
	scanf("%f%f%f%f",&r,&l,&b,&sqmeter);
	area_ground=3.14*r*r;
	area_pitch=2*(l+b);
	grassed_area=(area_ground-area_pitch);
	total_cost=(grassed_area*sqmeter);
	printf("Total cost to grow the grass is %f",total_cost);
}
