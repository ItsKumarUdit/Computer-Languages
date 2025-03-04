#include<stdio.h>
int main()
{
	int dnum=0, bnum, place=1;
	printf("Enter any binary number: ");
	scanf("%d",&bnum);
	
	while(bnum != 0){
		
		dnum += bnum%8*place;
		bnum/=8;
		place*=2;
	}
	printf("Decimal number : %d",dnum);
	return 0;
}
