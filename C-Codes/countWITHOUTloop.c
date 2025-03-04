#include <stdio.h>
#include <math.h>

int main()
{
    int num, count;
    printf("Enter a number of maximum 5 digits: ");
    scanf("%d", &num);
    
    if (num >= 0 && num <= 99999)
    {
        
        count = (num == 0) ? 1 : (log10(num) + 1);
        printf("The number of digits is %d\n", count);
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}

