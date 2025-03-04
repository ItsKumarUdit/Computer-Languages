#include<stdio.h>
int main()
{
	int first_side,second_side,third_side;
	printf("Enter first side: ");
	scanf("%d",&first_side);
	printf("Enter second side: ");
	scanf("%d",&second_side);
	printf("Enter third side: ");
	scanf("%d",&third_side);
	if((first_side+second_side+third_side) == 180)
	{
		printf("Triangle will formed");
	}
	else
	{
		printf("Trinagle won't formed");
	}
}
