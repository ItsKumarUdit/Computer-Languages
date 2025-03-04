#include<stdio.h>
int main()
{
	int num1, num2, option, result;
	printf("Enter any two numbers: ");
	scanf("%d%d",&num1,&num2);
	printf("option\n 1 Add\n 2 Subtract\n 3 Multiply\n 4 Quotient\n 5 Remainder: ");
	printf("\nEnter your option: ");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1 : result = num1 + num2;
		         printf("Sum is %d",result);
		         break;
	    case 2 : result = num1 - num2;
		         printf("Subtract is %d",result);
		         break;
		case 3 : result = num1 * num2;
		         printf("Multiply is %d",result);
		         break;
		case 4 : result = num1 / num2;
		         printf("Quotient is %d",result);
		         break;
		case 5 : result = num1 % num2;
		         printf("Remainder is %d",result);
		         break;
		default : printf("Invalid option");
	}
	return 0;
}
