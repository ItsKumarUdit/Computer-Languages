#include<stdio.h>
int main()
{
	float p,t,r,SI,Total_amount;
	printf("Enter p,t,r values:");
	scanf("%f%f%f",&p,&t,&r);
	SI=(p*t*r)/100.0;
	Total_amount=p+SI;
	printf("Simple interest is %f",SI);
	printf("\nTotal amount is %f",Total_amount);
}
