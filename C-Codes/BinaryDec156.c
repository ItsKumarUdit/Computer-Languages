#include<stdio.h>
int main()
{
	int dnum=0,bnum,R,place=1;
	printf("Enter any number : ");
	scanf("%d",&bnum);
	while(bnum>0){
		R = bnum % 10;
		dnum += R*place;
		bnum /= 10;
		place *= 2;
	}
	printf("Decimal number is %d",dnum);
	return 0;
}
