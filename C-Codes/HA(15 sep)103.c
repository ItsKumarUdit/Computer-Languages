#include <stdio.h>

int main() {
    int carA_speed, carB_speed;
    printf("Enter the speed of Car A: ");
    scanf("%d", &carA_speed);

    printf("Enter the speed of Car B: ");
    scanf("%d", &carB_speed);

    if (carA_speed > 2000 && carA_speed < 3000) {
        printf("Car A is selected.\n");
    } else if (carB_speed > 100 && carB_speed < 500) {
        printf("Car B is selected.\n");
    } else {
        printf("No car is selected within the specified range.\n");
    }

    return 0;
}

