#include<stdio.h>
int main()
{
	int num, r, prodigit=1;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(; num != 0; num /= 10){
		r = num % 10;
		prodigit *= r;
	}
	printf("Product of digit is : %d",prodigit);
	return 0;
}
