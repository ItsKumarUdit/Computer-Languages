#include <stdio.h>

int main() {
    float r, h, volume, cost;
    const float pi = 3.14;
    const float rate = 40.0;

    
    printf("Enter the radius of the bottle (in cm): ");
    scanf("%f", &r);

    printf("Enter the height of the bottle (in cm): ");
    scanf("%f", &h);

    
    volume = pi * r * r * h;

    
    volume = volume / 1000.0; 

    
    cost = volume * rate;

    printf("The cost of the milk is %.2f\n", cost);

    return 0;
}

