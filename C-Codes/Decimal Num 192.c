#include<stdio.h>
int main()
{
	int dnum=0, bnum, r, place=1;
	printf("Enter any binary number: ");
	scanf("%d",&bnum);
	
	while(bnum != 0){
		r=bnum%10;
		dnum += r*place;
		bnum/=10;
		place*=2;
	}
	printf("Decimal number : %d",dnum);
	return 0;
}
