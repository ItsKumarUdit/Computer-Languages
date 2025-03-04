#include <stdio.h>

int main()
{
    int base, exponent, i, result = 1; 
    printf("Enter the base number: "); 
    scanf("%d", &base); 
    printf("Enter the exponent: "); 
    scanf("%d", &exponent); 

    for ( i = 0; i < exponent; i++) 
    {
        result = result * base; 
    }

    printf("%d to the power of %d is %d\n", base, exponent, result);
    return 0;
}

