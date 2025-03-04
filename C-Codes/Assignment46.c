#include<stdio.h>
main()
{
	float radius,height,Volume,TSA;
	printf("Enter radius and height values in cm:");
	scanf("%f%f",&radius,&height);
	TSA=2*3.14*radius*(radius+height);
	printf("TSA is %f",TSA);
}
