#include <stdio.h>
int main() {
    int needMilk, needBread, needEggs, needFruits;
    printf("Do you need milk? (1 for yes, 0 for no): ");
    scanf("%d", &needMilk);
    printf("Do you need bread? (1 for yes, 0 for no): ");
    scanf("%d", &needBread);
    printf("Do you need eggs? (1 for yes, 0 for no): ");
    scanf("%d", &needEggs);
    printf("Do you need fruits? (1 for yes, 0 for no): ");
    scanf("%d", &needFruits);

    printf("\nSupermarket List:\n");

    if (needMilk == 1) {
        printf("- Milk\n");
    }
    if (needBread == 1) {
        printf("- Bread\n");
    }
    if (needEggs == 1 ) {
        printf("- Eggs\n");
    } 
    if (needFruits == 1) {
        printf("- Fruits\n");
    }
}

