#include <stdio.h>

int factorial(int n) {
 if (n == 0) {
   return 1;
 } else {
   return n * factorial(n - 1);
 }
}

double series_sum(int n) {
 bvdouble sum = 0.0; int i;
 for (i = 1; i <= n; ++i) {
   sum += (double)factorial(i) / i;
 }
 return sum;
}

int main() {
 int n = 5;  
 double sum = series_sum(n);

 printf("The sum of the series 1!/1 + 2!/2 + ... + %d!/%d is: %.2lf\n", n, n, sum);

 return 0;
}

