#include<stdio.h>
int main()
{
	int dnum,bnum=0,place=1;
	printf("Enter any number : ");
	scanf("%d",&dnum);
	while(dnum>0){
		bnum += dnum%2*place;
		dnum /= 2;
		place *= 10;
	}
	printf("Binary number is %d",bnum);
	return 0;
}

