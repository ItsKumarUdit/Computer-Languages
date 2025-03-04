#include <stdio.h>

int main() {
  // Define the size of the matrices
  const int n = 3; // Change this value as needed

  // Declare two matrices as static arrays within the function
  int matrix1[n][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matrix2[n][n] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

  // Calculate the sum of corner elements
  int sum = matrix1[0][0] + matrix1[0][n-1] + matrix1[n-1][0] + matrix2[0][0]
            + matrix2[0][n-1] + matrix2[n-1][0];

  // Print the sum
  printf("Sum of corner elements: %d\n", sum);

  return 0;
}



