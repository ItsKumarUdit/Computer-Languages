#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);

    while (T--) {
        int X, Y;  
        scanf("%d %d", &X, &Y);

         
        if (X < 50) {
            printf("Z\n");  
        } else if (Y < 50) {
            printf("F\n"); 
        } else {
            printf("A\n"); 
        }
    }

    return 0;
}
