v #include <stdio.h>
int main()
{
    int rows, row, col;
    printf("Enter the value of rows: ");
    scanf("%d", &rows);
    for (row = 0; row < rows; row++)
    {
        for (col= 0; col < rows; col++)
        {
            if (row == 0 || row == rows - 1 || col == 0 || col == rows - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

