#include<stdio.h>
int main()
{
	char operation;
	int a, b;
	
	printf("Enter any two number\n");
	scanf("%d %d",&a, &b);
	printf("a:%d b:%d\n", a, b);
	
	printf("Enter S (Sum), s (subtraction), m (multiplication), d (division), M (modulo)\n");
	scanf("%s", &operation);

	switch (operation)
	{
		case 'S' :
		printf("Sum of %d and %d is %d\n", a, b, (a+b));
		break;
		case 's' : printf("Subtraction is %d\n",(a-b));
		break;
		case 'm' : printf("Multiplication is %d\n",(a*b));
		break;
		case 'd' :
		if (b != 0)
			printf("Division is %.2f\n",((float)(a)/b));
		else
			printf("Can't divide by 0\n");
		break;
		case 'M' :
		if (b != 0)
			printf("Modulo is %d\n",(a%b));
		else
			printf("Can't divide by 0\n");	
		break;
		default : printf("invalid operation");
		break;
	}
	
	return 0;
	
}
