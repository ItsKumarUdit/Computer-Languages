#include <stdio.h>

int main() {
    double length, breadth;
    int choice;

    
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);

   
    printf("\nChoose an option:\n");
    printf("1. Calculate and display area\n");
    printf("2. Calculate and display perimeter\n");
    printf("3. Calculate and display both area and perimeter\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Area of the rectangle: %.2lf square units\n", length * breadth);
            break;
        case 2:
            printf("Perimeter of the rectangle: %.2lf units\n", 2 * (length + breadth));
            break;
        case 3:
            printf("Area of the rectangle: %.2lf square units\n", length * breadth);
            printf("Perimeter of the rectangle: %.2lf units\n", 2 * (length + breadth));
            break;
        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }

    return 0;
}

