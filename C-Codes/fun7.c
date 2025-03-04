#include<stdio.h>

void ToDecimal(int Bnum){
	int Dnum = 0, place = 1;
	while(Bnum>0){
		Dnum += Bnum%10*place;
		Bnum /= 10;
		place *= 2;
	}
	printf("Decimal is = %d",Dnum);
}

int main(){
	int  Bnum;
	printf("Enter any Binary number: ");
	scanf("%d",&Bnum);
	ToDecimal(Bnum);
}
