#include<stdio.h>
int main()
{
	float R,r,costsqmt,Aocircle,Aicircle,patharea,totalcost;
	printf("Enter R , r and costsqmt of the circle");
	scanf("%f%f%f",&R,&r,&costsqmt);
	Aocircle=3.14*((R+r)*(R+r));
	Aicircle=3.14*r*r;
	patharea=Aocircle-Aicircle;
	totalcost=patharea*costsqmt;
	printf("Total cost of entire path is %f",totalcost);
}
