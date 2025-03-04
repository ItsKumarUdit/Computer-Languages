#include <stdio.h>

int main() {
    int x1, x2;
    
    
    printf("Enter the initial position of Nihar (X1): ");
    scanf("%d", &x1);
    
    printf("Enter the initial position of Nihar's friend (X2): ");
    scanf("%d", &x2);
    
   
    if ((x1 % 2 == 0 && x2 % 2 == 0) || (x1 % 2 != 0 && x2 % 2 != 0)) {
        printf("Nihar and his friend will meet.\n");
    } else {
        printf("Nihar and his friend will not meet.\n");
    }
    
    return 0;
}

