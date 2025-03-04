#include <stdio.h>

int main() {
  // Define the matrix size
  int rows, columns;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &columns);

  // Create the matrix
  int matrix[rows][columns],i,j;

  // Read the matrix elements
  for ( i = 0; i < rows; i++) {
    for ( j = 0; j < columns; j++) {
      printf("Enter element at row %d, column %d: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }

  // Calculate the sum of boundary elements
  int sum = 0;
  for ( i = 0; i < rows; i++) {
    sum += matrix[i][0]; // Add first column elements
    sum += matrix[i][columns - 1]; // Add last column elements
  }
  for ( j = 1; j < columns - 1; j++) {
    sum += matrix[0][j]; // Add first row elements
    sum += matrix[rows - 1][j]; // Add last row elements
  }

  // Print the sum of boundary elements
  printf("Sum of all boundary elements: %d\n", sum);

  return 0;
}

