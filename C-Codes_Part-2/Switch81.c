#include<stdio.h>
int main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	
	switch(num%5)
	{
		case 0: printf("Multiple of 5");
		break;
		default : printf("Not a multiple of 5");
	}
	return 0;
}
