#include <stdio.h>

int main() {
   int rows, row, col;
   printf("Enter rows val: ");
   scanf("%d",&rows);

   for (row = 1; row <= rows; row++) {
       for (col = 1; col <= rows; col++) {
           if (row == 1 || row == rows || col == 1 || col == rows) {
               printf("* ");  
           } else {
               printf("  ");  
           }
       }
       printf("\n");  
   }

   return 0;
}

