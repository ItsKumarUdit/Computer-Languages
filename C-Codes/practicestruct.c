#include <stdio.h>

 struct Height {
  int feet;
  float inches;
} Height;

float calculateBMI(Height height, float weight) {
  float convertedHeight = (height.feet * 30.48) + (height.inches * 2.54);
  return weight / (convertedHeight * convertedHeight / 10000);
}

void acceptHeight(Height *h) {
  printf("Enter feet: ");
  scanf("%d", &h->feet);
  printf("Enter inches: ");
  scanf("%f", &h->inches);
}

void displayBMI(Height height, float weight) {
  printf("BMI: %.2f\n", calculateBMI(height, weight));
}

float convertToCM(Height height) {
  return (height.feet * 30.48) + (height.inches * 2.54);
}

int main() {
  Height person;
  float weight;

  acceptHeight(&person);
  printf("Enter weight: ");
  scanf("%f", &weight);

  displayBMI(person, weight);
  printf("Height in cm: %.2f\n", convertToCM(person));

  return 0;
}

