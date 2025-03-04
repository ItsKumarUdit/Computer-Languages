#include<stdio.h>  
int main() {  
    int year,c=0;  
    int n, bill,sum=0;
    printf("Enter no. of cust: ");
    scanf("%d",&n);
    printf("Enter bill amount: ");
    scanf("%d",&bill);
   for(year=1990;year<=2023;year++){  
    if(((year%4==0) && ((year%400==0) || (year%100!=0))))
    {  
        c++;
    } 
    
} while(n)
{
    bill= bill*8;
    sum = sum+bill;
    n--;
}
printf("%d",sum);
}
