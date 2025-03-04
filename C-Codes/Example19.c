#include<stdio.h>

int main()
{
	float l,b,s,sqmeter,areawall,areawd,painted_area,total_cost;
	printf("Enter the lenght, breadth of rectangle and side of square and sqmeter");
	scanf("%f%f%f%f",&l,&b,&s,&sqmeter);
	areawall=l*b;
	areawd=s*s;
	painted_area=areawall-areawd;
	total_cost=painted_area*sqmeter;
	printf("Total cost for painting the wall is %f",total_cost);
}
