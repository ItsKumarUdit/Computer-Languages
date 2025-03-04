#include <stdio.h>

// Function to calculate the area of a rectangle.
float area(float length, float width) {
  return length * width;
}

// Function to calculate the perimeter of a rectangle.
float perimeter(float length, float width) {
  return 2 * (length + width);
}

int main() {
  // Declare variables.
  float length, width, area, perimeter;

  // Prompt the user for input.
  printf("Enter the length of the rectangle: ");
  scanf("%f", &length);
  printf("Enter the width of the rectangle: ");
  scanf("%f", &width);

  // Calculate the area and perimeter of the rectangle.
  area = length*width;
  perimeter = 2*(length+width);

  // Display the results.
  printf("The area of the rectangle is %.2f square units.\n", area);
  printf("The perimeter of the rectangle is %.2f units.\n", perimeter);

  return 0;
}

