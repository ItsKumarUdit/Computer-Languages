#include <stdio.h>

int main() {
  int n, i, j;
  printf("Enter the value of N: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      printf("%d ", (i - 1) * n + j);
    }
    printf("\n");
  }

  return 0;
}




