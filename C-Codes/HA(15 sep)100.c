#include <stdio.h>

int main() {
    int A, B, C, D;
    
    
    printf("Enter the initial number of coins for Nichith (A): ");
    scanf("%d", &A);
    
    printf("Enter the initial number of coins for Nischaya (B): ");
    scanf("%d", &B);
    
   
    printf("Enter the number of coins given by Satya (C): ");
    scanf("%d", &C);
    
    printf("Enter the number of coins given by Ram (D): ");
    scanf("%d", &D);
    
    int currentWinner = (A >= B) ? 0 : 1; 
    
    if (currentWinner == 0) {
        A += C;
    } else {
        B += C;
    }
    
    currentWinner = (A >= B) ? 0 : 1;
    
    if (currentWinner == 0) {
        A += D;
    } else {
        B += D;
    }
    
    if (A == B) {
        printf("Nichith is the final winner.\n");
    } else if (A > B) {
        printf("Nichith is the final winner.\n");
    } else {
        printf("Nischaya is the final winner.\n");
    }
    
    return 0;
}

