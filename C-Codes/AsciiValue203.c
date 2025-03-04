#include <stdio.h>

int main() {
    char c;
    
    for(c = 'a'; c <= 'z'; c++)
        printf("Ascii value of %c = %d\n", c, c);
    return 0;
}

