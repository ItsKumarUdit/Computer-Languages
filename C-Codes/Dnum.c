#include<stdio.h>
int main(){
	int Dnum=0, Bnum, place=1;
	printf("Enter any Binary number: ");
	scanf("%d",&Bnum);
	
	while(Bnum>0){
		Dnum += Bnum%10*place;
		Bnum/=10;
		place*=2;
	}
	printf("Decimal number is %d",Dnum);
}
