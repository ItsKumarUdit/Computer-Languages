#include<stdio.h>
int main()
{
	int rating;
	printf("Give your rating (1 - 5) : ");
	scanf("%d",&rating);
	
	switch (rating)
	{
		case 1:
			printf("You have given Rating 1");
			break;
		case 2:
			printf("You have given Rating 2");
			break;
		case 3:
			printf("You have given Rating 3");
			break;
		case 4:
			printf("You have given Rating 4");
			break;
		case 5:
			printf("You have given Rating 5");
			break;
		default :
			printf("Invalid rating");
	}
	return 0;
}
