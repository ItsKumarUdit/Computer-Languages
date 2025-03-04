#include <stdio.h>

int main() {
    int month, year;
    
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    int isLeapYear = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        isLeapYear = 1;
    }
    
    int daysInMonth;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if (isLeapYear) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
            break;
        default:
            printf("Invalid month. Please enter a number between 1 and 12.\n");
            return 1; 
    }
    printf("Number of days in the given month: %d\n", daysInMonth);
    return 0;
}

