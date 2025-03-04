#include<stdio.h>
int main()
{
	float Radius,Height,Slant_Height,Volume,TSA,div;
	printf("Enter Radius,Height and Slant_Height of cone");
	scanf("%f%f%f",&Radius, &Height, &Slant_Height);
	printf("\n%1f %1f %1f",Radius,Height,Slant_Height);
	TSA=3.14*Radius*(Radius+Slant_Height);
	Volume= (float) 5/3*Radius;
    div=(float) 1/3;
	printf("TSA is %1f\n",TSA);
	printf("Volume is %1f\n",Volume);
	printf("div is %1f\n",div);
	Volume=Volume/3;
	printf("Volume is %1f",Volume);
}
