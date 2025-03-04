#include<stdio.h>

int Power(int base, int power){
	int P = 1, i;
	for(i=1; i<=power; i++){
		P = P*base;
	}
	return P;
}

int main(){
	int base, power;
	printf("Enter base number: ");
	scanf("%d", &base);
	printf("\nEnter power: ");
	scanf("%d",&power);
	int R = Power(base, power);
	printf("\nResult = %d",R);
}
