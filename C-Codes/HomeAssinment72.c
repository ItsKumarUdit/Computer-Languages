#include<stdio.h>
int main()
{
	int num_notes=0,remainder;
	printf("Enter total money: ");
	scanf("%d",&remainder); 
    if (remainder >= 100)
    {
	     num_notes += remainder/100;
	     remainder = remainder%100;
    }

    if (remainder >= 50)
    {
     	num_notes += remainder/50;
    	remainder = remainder%50;
    }
    if (remainder >= 10)
    {
    	num_notes += remainder/10;
    	remainder = remainder%10;
	}
	if (remainder >= 5)
	{
		num_notes += remainder/5;
		remainder = remainder%5;
	}
	if (remainder >= 2)
	{
		num_notes += remainder/2;
		remainder = remainder%2;
	}
	if (remainder == 1)
	{
		num_notes += 1;
	}

	printf("Number of notes %d",num_notes);
}
