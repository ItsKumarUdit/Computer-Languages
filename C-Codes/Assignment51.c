#include<stdio.h>
int main()
{
	float distance,fuel,MRG;
	printf("Enter distance in km ,fuel in L: ");
	scanf("%f%f",&distance,&fuel);
	MRG=distance/fuel;
	printf("Fuel efficency: %.2f MRG",MRG);
}
