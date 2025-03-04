#include <stdio.h>

int main() {
    int x;

    // Input Shivani's scores
    printf("Enter Shivani's scores: ");
    scanf("%d", &x);

    // Using a switch statement
    switch (x) {
        case 500 ... 1000:
            printf("Bronze Medal\n");
            break;
        case 1001 ... 1500:
            printf("Silver Medal\n");
            break;
        case 1501 ... 2000:
            printf("Gold Medal\n");
            break;
        default:
            printf("No Medal\n");
    }
    return 0;

    
}
