#include<stdio.h>

int main(){
	int Cust_Num;  //Customer number.
	float Charges, Units;
	printf("Enter Customer number: ");
	scanf("%d",&Cust_Num);
	printf("\nEnter total Units consumed: ");
	scanf("%f",&Units);  
	
	if(Units <= 200)
	  Charges = 0.50*Units;
	else if(Units <= 400)
	  Charges = 100 + 0.65*(Units-200);
	else if(Units <= 600)
	  Charges = 230 + 0.80*(Units-400);
	else
	  Charges = 390 + 1.5*(Units-600);
	  
	printf("\nCustomer number is %d",Cust_Num);
	printf("\nTotal Electricity bill is %.2f",Charges);
	
	return 0;
}
