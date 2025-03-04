#include<stdio.h>
int main(){
	int Octnum=0, Bnum, place=1;
	printf("Enter any Binary number: ");
	scanf("%d",&Bnum);
	
	while(Bnum>0){
		Octnum += Bnum%8*place;
		Bnum/=8;
		place*=2;
	}
	printf("Decimal number is %d",Octnum);
}
