#include<stdio.h>
int main()
{
	int num;
	char choice='y';
	while(choice=='y' || choice=='Y')
	{
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	if(num%2==0)
	  printf("Number is Even");
	else
	  printf("Number is Odd");
	  
	  printf("\nEnter Y to continue..");
	  scanf("%s",&choice);
    }
	  return 0;
}
