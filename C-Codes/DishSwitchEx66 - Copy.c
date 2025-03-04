#include<stdio.h>
int main()
{
	char Dish_Name;
	printf("Enter the 1st Character of the item in Upper case : ");
	scanf("%s",&Dish_Name);
	
	switch(Dish_Name)
	{
		case 'I':
			printf("Idly 40");
			break;
		case 'D':
			printf("Dosa 60");
			break;
		case 'W':
			printf("Wada 70");
			break;
		case 'U':
			printf("Upma 30");
			break;
		default :
			printf("Not available");
	}
	return 0;
}
