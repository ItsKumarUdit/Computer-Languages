#include<stdio.h>
int main()
{
	int bnum=0, dnum, place=1;
	printf("Enter any decimal number: ");
	scanf("%d",&dnum);
	
	while(dnum != 0){
		bnum += dnum%2*place;
		dnum/=2;
		place*=10;
	}
	printf("Binary is : %d",bnum);
	return 0;
}
