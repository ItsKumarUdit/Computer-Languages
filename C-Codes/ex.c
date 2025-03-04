#include<stdio.h>
int main()
{
    
    float amount;
    
    printf("ATM Cash Withdrawal\n\n");
    
    printf("Enter the withdrawal amount:");
    scanf("%f",&amount);
    
    if(amount>500 && amount<=1000){
        printf("Withdrawal amount exceeds the maximum limit.");
        
    }
    else if(amount>1000){
        printf("Error: Insufficient account balance.");
    }
    else if(amount==500){
        printf("Success! $500.00 has been withdrawn. New account balance: $500.00.");
    }
    else{
        printf("Inavlid number: ");
    }
}
