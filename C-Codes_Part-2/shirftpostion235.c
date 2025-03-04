#include <stdio.h>

int main() {
  // Declare variables.
  int number, positions,i;

  // Prompt the user for input.
  printf("Enter an integer: ");
  scanf("%d", &number);
  printf("Enter the number of positions to shift: ");
  scanf("%d", &positions);

  // Perform the bitwise left shift operation.
  int shifted_number = number << positions;

  // Display the result in binary and decimal form.
  printf("The shifted number in binary: ");
  for ( i = 31; i >= 0; i--) {
    printf("%d", (shifted_number >> i) & 1);
  }
  printf("\n");

  printf("The shifted number in decimal: %d\n", shifted_number);

  return 0;
}

