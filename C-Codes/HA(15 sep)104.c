#include <stdio.h>

int main() {
    int mahaIQ, einsteinIQ;

    
    printf("Enter Maha's current IQ: ");
    scanf("%d", &mahaIQ);

    einsteinIQ = 170;

   
    mahaIQ += 7;

   
    if (mahaIQ > einsteinIQ) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}



