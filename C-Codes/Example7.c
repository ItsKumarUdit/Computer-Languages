#include<stdio.h>
int main()
{
	float Radius,Height,Volume,TSA;
	printf("Enter Radius and Height of cylinder");
	scanf("%f%f",&Radius,&Height);
	Volume=3.14*Radius*Radius*Height;
	TSA=2*3.14*Radius*(Height+Radius);
	printf("Volume is %f",Volume);
	printf("TSA is %f",TSA);
}
