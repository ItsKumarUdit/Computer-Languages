#include<stdio.h>
int main()
{
	float side,volume,tsa;
	printf("Enter any side of a cube");
	scanf("%f",&side);
	volume=side*side*side;
	tsa=6*side*side;
	printf("volume is %f",volume);
	printf("tsa is %f",tsa);
}
