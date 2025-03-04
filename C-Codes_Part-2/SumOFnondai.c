#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            // Skip the boundary elements
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
            {
                continue;
            }
            // Add the non boundary elements
            else
            {
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("The sum of non boundary elements is: %d\n", sum);
    return 0;
}

