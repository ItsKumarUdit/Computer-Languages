#include <stdio.h>

int main() {
  // Define the size of the matrix
  int n,i,j;
  printf("Enter the size of the square matrix: ");
  scanf("%d", &n);

  // Ensure it's a square matrix
  if (n <= 0) {
    printf("Error: Matrix size must be a positive integer.\n");
    return 1;
  }

  // Declare the matrix
  int matrix[n][n];

  // Read the elements of the matrix
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("Enter element at row %d, column %d: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }

  // Calculate the trace (sum of diagonal elements)
  int trace = 0;
  for ( i = 0; i < n; i++) {
    trace += matrix[i][i];
  }

  // Print the trace
  printf("Trace of the matrix: %d\n", trace);

  return 0;
}

