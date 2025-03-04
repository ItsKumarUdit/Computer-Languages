#include <stdio.h>

int main() {
    int units;
    float bill = 0.0, gst = 0.0, totalBill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = 0.0;
    } else if (units <= 200) {
        bill = (units - 100) * 5;
        gst = bill * 0.18;
    } else if (units <= 500) {
        bill = (100 * 5) + (units - 200) * 8;
        gst = bill * 0.18;
    } else {
        bill = (100 * 5) + (300 * 8) + (units - 500) * 10;
        gst = bill * 0.18;
    }

    totalBill = bill + gst;

    printf("Electricity bill: Rs. %.2f\n", bill);
    printf("GST: Rs. %.2f\n", gst);
    printf("Total bill: Rs. %.2f\n", totalBill);

    return 0;
}

