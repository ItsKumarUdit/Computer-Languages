#include <stdio.h>

int main() {
   int num1, num2, sum=0;

   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);

   
   int *ptr1 = &num1;
   int *ptr2 = &num2;

   
   sum = *ptr1 + *ptr2;  

   printf("Sum = %d\n", sum);

   return 0;
}

