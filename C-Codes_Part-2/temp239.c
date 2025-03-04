#include <stdio.h>

int main() {
  // Declare variables.
  float temperature;

  // Prompt the user to enter a temperature.
  printf("Enter a temperature in Celsius: ");
  scanf("%f", &temperature);

  // Classify the temperature using if-else statements.
  if (temperature >= 30) {
    printf("The temperature is Hot.\n");
  } else if (temperature >= 20 && temperature < 30) {
    printf("The temperature is Warm.\n");
  } else {
    printf("The temperature is Cold.\n");
  }

  return 0;
}

