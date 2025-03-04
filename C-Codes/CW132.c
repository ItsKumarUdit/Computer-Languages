#include<stdio.h>
int main()
{
	int i,num,sum=0,digits;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(; num!=0; num=num/10){
		i++;
		digits = num%10;
		sum += digits*digits;
	}
	printf("digits = %d",i);
	printf("\nsum of square of digits = %d",sum);                                                                    
	return 0;
} 
