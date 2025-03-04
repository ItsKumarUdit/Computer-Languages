#include<stdio.h>
int main()
{
	int num, num1, digit, i, fvalue;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	printf("The factorial value of each digit in %d is:\n", num); 
	
	for(num1=num; num1!=0; num1/=10){
		digit = num1 % 10;
		fvalue=1;
		 for(i=1; i<=digit; i++){
		 	fvalue = fvalue*i;
		 }
		 printf("%d! = %d\n",digit, fvalue);
	}
	return 0;
}
