#include <stdio.h>

int main() {
   int limit, a, b, c;

   printf("Enter the upper limit for side lengths: ");
   scanf("%d", &limit);

   printf("Pythagorean triplets within %d:\n", limit);

   for ( a = 1; a <= limit; a++) {
       for ( b = 1; b <= limit; b++) {
           for ( c = 1; c <= limit; c++) {
               if (a * a + b * b == c * c) {
                   printf("(%d, %d, %d)\n", a, b, c);
               }
           }
       }
   }

   return 0;
}

