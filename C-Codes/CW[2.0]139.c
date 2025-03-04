#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Loop until num becomes zero
    for (; num != 0; num /= 10)
    {
        // Increment count by one
        count++;
    }
    printf("The number of digits is %d\n", count);
    return 0;
}

