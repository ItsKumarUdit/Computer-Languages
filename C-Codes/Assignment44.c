#include <stdio.h>

int main()
{
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if ((num >= 5550 && num <= 5559) || (num >= 555 && num <= 599) || (num >= 55 && num <= 99))
	{
        printf("\nYES");
    } 
	else 
	{
        printf("\nNO");
    }
}
