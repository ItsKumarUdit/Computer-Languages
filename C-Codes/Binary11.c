#include<stdio.h>
int main(){
	int Bnum=0, Dnum, place=1;
	printf("Enter any Decimal number: ");
	scanf("%d",&Dnum);
	
	while(Dnum>0){
		Bnum += Dnum%2*place;
		Dnum/=2;
		place*=10;
	}
	printf("Binary number is %d",Bnum);
}
