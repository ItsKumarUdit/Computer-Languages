#include <stdio.h>
int main()
{
    int num;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    if (num >= 1000 && num <= 9999) 
    {
        int Last_digit = num % 10; 
        int found = 1; 

        while (num > 0) 
        {
            if (num % 10 != Last_digit) 
            {
                found = 0; 
                break; 
            }
            num = num / 10; 
        }

        if (found == 1) 
        {
            printf("It's a lucky number");
        }
        else 
        {
            printf("Not a lucky number");
        }
    }
    else 
    {
        printf("Invalid input\n");
    }

}

