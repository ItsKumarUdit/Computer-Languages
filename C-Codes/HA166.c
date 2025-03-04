#include<stdio.h>
int main()
{
	int num,rev=0,r;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(; num != 0; num /= 10){
		r = num % 10;
		rev = rev * 10 + r;
	}
	printf("Reverse number is : %d",rev);
	return 0;
}
