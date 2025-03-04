#include <stdio.h>

int main() {
    float batteryHealth;

    printf("Enter your iPhone's battery health percentage: ");
    scanf("%f", &batteryHealth);

    if (batteryHealth >= 80.0) {
        printf("Your iPhone is in optimal condition.\n");
    } else {
        printf("Your iPhone is not in optimal condition.\n");
    }

    return 0;
}

