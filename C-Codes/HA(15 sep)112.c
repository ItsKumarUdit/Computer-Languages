#include <stdio.h>

int main() {
    int N, X;
    int totalBill;
    
    printf("Enter the number of items (N): ");
    scanf("%d", &N);

    printf("Enter the cost of each item (X): ");
    scanf("%d", &X);

    totalBill = N * X;

    if (totalBill >= 10000 && totalBill <= 99999) {
        printf("The total bill %d is equivalent to a valid phone number.\n", totalBill);
    } else {
        printf("The total bill %d is not equivalent to a valid phone number.\n", totalBill);
    }

    return 0;
}


