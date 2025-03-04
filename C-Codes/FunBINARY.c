#include<stdio.h>

int BinaryNum(int a){
	int bnum=0,place=1;
	while(a > 0){
		bnum += a%2*place;
		a /= 2;
		place *= 10;
	}
	return bnum;
}

void main(){
	int dnum;
	printf("Enter any decimal number: ");
	scanf("%d",&dnum);
	int Result = BinaryNum(dnum);
	printf("Binary number is %d",Result);
}
