#include <stdio.h>

int main() {
    int numFamilyMembers;
    char showTime;
    float ticketPrice = 0.0;
    float discount = 0.0;
    float totalFare = 0.0;

    printf("Enter the number of family members: ");
    scanf("%d", &numFamilyMembers);

    printf("Enter the show time (M for morning, E for evening): ");
    scanf(" %c", &showTime); 

    if (numFamilyMembers > 6) {
        if (showTime == 'M' || showTime == 'm') {
            ticketPrice = 100.0;
            discount = 0.20;
        } else if (showTime == 'E' || showTime == 'e') {
            ticketPrice = 150.0;
            discount = 0.15;
        } else {
            printf("Invalid show time.\n");
            return 1;
        }
    } else {
        ticketPrice = 150.0;
        discount = 0.0; 
    }
    totalFare = ticketPrice * numFamilyMembers * (1.0 - discount);

    printf("Total ticket fare after discount: %.2f rupees\n", totalFare);

    return 0;
}

