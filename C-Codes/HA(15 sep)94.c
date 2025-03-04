#include<stdio.h>
int main()
{
	int cost_item,change,num_notes=0;
	printf("Enter product amount: ");
	scanf("%d",&cost_item);
	
	change=2000-cost_item;
	
	if(change>=500)
	{
		num_notes+=change/500;
		change=change%500;
	}
	if(change>=100)
	{
		num_notes+=change/100;
		change=change%100;
	}
	if(change>=50)
	{
		num_notes+=change/50;
		change=change%50;
	}
	if(change>=20)
	{
		num_notes+=change/20;
		change=change%20;
	}
	if(change>=10)
	{
		num_notes+=change/10;
		change=change%10;
	}
	if(change>=5)
	{
		num_notes+=change/5;
		change=change%5;
	}
	if(change>=2)
	{
		num_notes+=change/2;
		change=change%2;
	}
	if(change==1)
	{
		num_notes+=1;
	}
	printf("Number of notes %d",num_notes);
	return 0;
}
