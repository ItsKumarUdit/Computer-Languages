#include <stdio.h>

int main() {
  int number, lower_bound, upper_bound;

  // Prompt the user to enter the number and the range.
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("Enter the lower bound of the range: ");
  scanf("%d", &lower_bound);
  printf("Enter the upper bound of the range: ");
  scanf("%d", &upper_bound);

  // Check if the number is within the specified range.
  if (number >= lower_bound && number <= upper_bound) {
    printf("The number is within the specified range.\n");
  } else {
    printf("The number is not within the specified range.\n");
  }

  return 0;
}

