#include<stdio.h>
int main()
{
	int num,digitsum=0,r;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(; num != 0; num /= 10){
		r = num % 10;
		 if(r % 2 != 0){
		 	digitsum += r;
		 }
	}
	printf("Sum of digit of odd in the number is %d",digitsum);
	
	return 0;
}
