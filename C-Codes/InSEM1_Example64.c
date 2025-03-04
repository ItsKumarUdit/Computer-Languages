#include<stdio.h>
main()
{
	int rating;
	printf("Enter your rating(1 - 5) : ");
	scanf("%d",&rating);
	/*
	if(rating==1)
	{
		printf("You have given rating 1");
	}
	else if(rating==2)
	{
		printf("You have given rating 2");
	}
	else if(rating==3)
	{
		printf("You have given rating 3");
	}
	else if(rating==4)
	{
		printf("You have given rating 4");
	}
	else if(rating==5)
	{
		printf("You have given rating 5");
	}	
	else 
	{
		printf("Invalid rating");
	}
	*/
	(rating>=1 && rating <= 5) ? printf("You have given rating %d", rating) : printf("Invalid rating");
	return 0;
}
