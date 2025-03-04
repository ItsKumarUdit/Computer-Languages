#include<stdio.h>
int main()
{
	float Length,Breadth,Height,Volume,TSA;
	printf("Enter Length,Breadth and Height of a coboid\n");
	scanf("%f%f%f",&Length,&Breadth,&Height);
	Volume=Length*Breadth*Height;
	TSA=2*(Length*Breadth+Breadth*Height+Height*Length);
	printf("Volume is %f\n",Volume);
	printf("TSA is %f\n",TSA);
}
