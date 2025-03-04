#include<stdio.h>

void ToBinary(int Dnum){
	int Bnum = 0, place = 1;
	while(Dnum>0){
		Bnum += Dnum%2*place;
		Dnum /= 2;
		place *= 10;
	}
	printf("Binary is = %d",Bnum);
}

int main(){
	int  Dnum;
	printf("Enter any decimal number: ");
	scanf("%d",&Dnum);
	ToBinary(Dnum);
}
