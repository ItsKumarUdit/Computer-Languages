#include <stdio.h>

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n;

  printf("Enter a non-negative integer: ");
  scanf("%d", &n);

  int factorial_of_n = factorial(n);

  printf("The factorial of %d is %d\n", n, factorial_of_n);

  return 0;
}


