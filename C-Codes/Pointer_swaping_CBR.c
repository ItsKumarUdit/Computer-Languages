#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int num1, num2;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int *p1=&num1, *p2=&num2;

    // Print original values of num1 and num2
    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call function by passing addresses of num1 and num2
    swap(p1, p2);

    // Print the swapped values of num1 and num2
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

