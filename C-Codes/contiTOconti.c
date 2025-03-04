#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = i;
        for (j = 1; j <= n; j++)
        {
            printf("%d ", k);
            k++;
            if (k > n)
                k = 1;
        }
        printf("\n");
    }
    return 0;
}


