#include <stdio.h>
int main()
{
    int num, count = 0; // to keep track of how many numbers are printed
    for (num = 1; count < 10; num++) // loop from 1 until 10 numbers are printed
    {
        if (num != 3 && num != 7) // check if the number is not 3 or 7
        {
            printf("%d ", num); // print the number
            count++; // increment the count
        }
    }
    
    return 0;
}



































