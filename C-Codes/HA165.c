#include<stdio.h>
int main()
{
	int num,digit,count=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	printf("Enter the digit: ");
	scanf("%d",&digit);
	
	for(; num != 0; num/=10){
		if(num%10==digit){
			count++;
		}
	}
	printf("Frequency of the digit is : %d",count);
	return 0;
}
