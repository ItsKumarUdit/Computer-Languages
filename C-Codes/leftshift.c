#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int shifted_a = a << b;  // Perform bitwise shift left

    if (shifted_a >= 50) {
    	printf("%d\n",a);
        printf("Result is greater than or equal to 50\n");
    } else {
        printf("Result is less than 50\n");
    }

    return 0;
}

