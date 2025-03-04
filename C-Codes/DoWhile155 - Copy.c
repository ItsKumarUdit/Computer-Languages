#include<stdio.h>
int main()
{
	int num; char choice;
	do
	{
		printf("Enter any number: ");
		scanf("%d",&num);
		if(num%2==0)
		     printf("Even Number");
		else
		     printf("Odd Number");
		printf("\nPress X key to continue...");
		scanf("%s",&choice);
	} while(choice == 'X' || choice == 'x');
}
