#include<stdio.h>
int main(){
	float principal, interest, time, totalamount;
	printf("Enter principal amount: ");
	scanf("%f",&principal);
	printf("Enter interest in %: ");
	scanf("%f",&interest);
	printf("Enter time in year: ");
	scanf("%f",&time);
	
	totalamount=principal+(principal*interest*time)/100;
	
	printf("total savings in bank after %.f year is %.2f ",time, totalamount);
	
}
