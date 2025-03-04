#include <stdio.h>

int main() {
    int userID, password;

    printf("Enter your User ID: ");
    scanf("%d", &userID);

    switch (userID) {
        case 12345: 
            printf("Enter your Password: ");
            scanf("%d", &password);

            switch (password) {
                case 6789: 
                    printf("Login successful. Welcome, Abdul!\n");
                    break;
                default:
                    printf("Incorrect Password. Please try again.\n");
            }
            break;
        default:
            printf("Incorrect User ID. Please try again.\n");
    }

    return 0;
}

