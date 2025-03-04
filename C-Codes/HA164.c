#include<stdio.h>
int main()
{
	int num, num1, swap, fd, ld, rev=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	
	ld=num%10;
	num1=num;
	
	while(num>10)
		num /= 10;
		fd = num;
		
	num=num1/10;
	
	while(num>10){
		
		rev = rev*10 + num%10;
		num = num / 10;
	}
	swap = ld;
	while(rev>0){
		
		swap = swap*10 + rev%10;
		rev = rev / 10;
	}
	swap = swap * 10 + fd;
	printf("Swap of first & last digit is : %d",swap);
	return 0;
	
}
