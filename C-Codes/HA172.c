#include <stdio.h>

int main()
{
    int a, b, quotient = 0, remainder;
    printf("Enter the dividend (a): "); 
    scanf("%d", &a); 
    printf("Enter the divisor (b): "); 
    scanf("%d", &b); 

    remainder = a; 
    while (remainder >= b) 
    {
        quotient++; 
        remainder = remainder - b; 
    }

    printf("The quotient of %d / %d is %d\n", a, b, quotient); 
    printf("The remainder of %d / %d is %d\n", a, b, remainder); 
    return 0;
}

