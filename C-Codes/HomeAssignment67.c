#include<stdio.h>
int main()
{
	char DishName;
	int quantity;
	printf("Enter first letter of Dish that you want (Upper Case) : ");
	scanf("%s",&DishName);
	printf("Enter quantity ");
	scanf("%d",&quantity);
	
	switch(DishName)
	{
		case 'B': printf("Burger = Rs. 200");
			      break;
		case 'F': printf("French = Rs. 50");
			      break;
		case 'P': printf("Pizza = Rs. 500");
			      break;
		case 'S': printf("Sandwiches = 150");
			      break;
		default : printf("Sorry, Not available");
	}
	return 0;
}
