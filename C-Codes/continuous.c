#include <stdio.h>

int main() {
  int input, i, j, counter = 1;
  printf("Enter the number of rows: ");
  scanf("%d", &input);

  for (i = 1; i <= input; i++) {
    for (j = 1; j <= input; j++) {
      printf("%d ", counter);
      counter++;
    }
    printf("\n");
  }

  return 0;
}

