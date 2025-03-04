#include <stdio.h>

int main() {
  // Declare variables.
  int integer, half_of_integer;

  // Prompt the user to enter an integer.
  printf("Enter an integer: ");
  scanf("%d", &integer);

  // Calculate half of the integer using bitwise operators.
  half_of_integer = integer >> 1;

  // Display the result.
  printf("Half of the integer, ignoring the fractional part: %d\n", half_of_integer);

  return 0;
}

