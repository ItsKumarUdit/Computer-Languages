#include <stdio.h>

int main() {
    int n = 5,i,k,j;

    
    for( i = 1; i <= n; i++) {
        
        for (j = i; j <= n; j++) {
            printf("%d ", j);
        }

        
        for ( k = 1; k < i; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
