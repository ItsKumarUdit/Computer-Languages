#include <stdio.h>

int main() {
    int choice1, choice2;
    
    printf("Select a category:\n");
    printf("1. Mobiles\n");
    printf("2. Appliances\n");
    scanf("%d", &choice1);

    switch (choice1) {
        case 1:
            printf("You selected Mobiles.\n");
            printf("Select a mobile item:\n");
            printf("1. iPhone\n");
            printf("2. Samsung Galaxy\n");
            scanf("%d", &choice2);

            switch (choice2) {
                case 1:
                    printf("iPhone is currently out of stock.\n");
                    break;
                case 2:
                    printf("Samsung Galaxy is currently out of stock.\n");
                    break;
                default:
                    printf("Invalid choice for mobile item.\n");
            }
            break;

        case 2:
            printf("You selected Appliances.\n");
            printf("Select an appliance item:\n");
            printf("1. Refrigerator\n");
            printf("2. Washing Machine\n");
            scanf("%d", &choice2);

            switch (choice2) {
                case 1:
                    printf("Refrigerator is currently out of stock.\n");
                    break;
                case 2:
                    printf("Washing Machine is currently out of stock.\n");
                    break;
                default:
                    printf("Invalid choice for appliance item.\n");
            }
            break;

        default:
            printf("Invalid category choice.\n");
    }

    return 0;
}

