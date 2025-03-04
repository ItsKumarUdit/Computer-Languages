#include <stdio.h>
int main() {
  
  int rows, cols, R, C, sum = 0;
  printf("Enter number of rows & cols in the matrix: ");
  scanf("%d%d", &rows,&cols);
  int matrix[rows][cols];
  
  printf("\nEnter %d elements in the Matrix: ",(rows*cols));
  for ( R = 0; R < rows; R++) {
    for (C = 0; C < cols; C++) {
      scanf("%d", &matrix[R][C]);
    }
  }
  for (R = 1; R< rows - 1; R++) { 
    for (C = 1; C < cols - 1; C++) { 
      sum += matrix[R][C];
    }
  }
  printf("\nSum of all non-boundary elements: %d\n", sum);

  return 0;
}

