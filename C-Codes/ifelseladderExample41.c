#include<stdio.h>
int main()
{
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	if(age<0)
	{
		printf("Invalid age");
	}
	else if(age<=3)
	{
		printf("You are on Infant");
	}
	else if(age<=6)
	{
		printf("You are a kid");
	}
	else if(age<=12)
	{
		printf("You are a child");
    }
	else if(age<=19)
	{
		printf("You are a teenager");
	}
	else if(age<=35)
	{
		printf("You are a youster");
	}
	else if(age<=50)
	{
		printf("You are in middle age");
	}
	else 
	{
		printf("You are in old age");
	}
}
