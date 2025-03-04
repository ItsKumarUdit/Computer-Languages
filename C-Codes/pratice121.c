#include <stdio.h>

int main() {
   int N, i, num = 1;

   printf("Enter the value of N: ");
   scanf("%d", &N);

   printf("Series: ");

   for (i = 1; i <= N; ++i) {
       printf("%d ", num);
       num += i;  
   }

   printf("\n");

   return 0;
}

