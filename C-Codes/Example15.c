#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,avg_rainfall;
	printf("enter rainfall of m1,m2,m3 and m4 in mm");
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	avg_rainfall=(float)(m1+m2+m3+m4/4)/10;
	printf("avg_rainfall is %f",avg_rainfall);
}
