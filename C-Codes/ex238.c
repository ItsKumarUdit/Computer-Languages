#include <stdio.h>
#include <math.h>

int main() {
  // Declare variables.
  float radius, area, cost_per_foot, total_cost;

  // Initialize the radius.
  radius = 1526.78;

  // Calculate the area of the circle in square feet.
  area = M_PI * radius * radius / (30.48 * 30.48);

  // Initialize the cost per foot.
  cost_per_foot = 8.75;

  // Calculate the total cost to paint the room.
  total_cost = area * cost_per_foot;

  // Display the total cost.
  printf("The total cost to paint the room is Rs.%.2f\n", total_cost);

  return 0;
}

