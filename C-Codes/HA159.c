#include<stdio.h>
int main()
{
	int num,fn,ln,sum_fn_ln=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	ln = num % 10;
	
	for(fn = num; fn > 10; fn /= 10);
	sum_fn_ln = ln + fn;
	printf("Sum of first & last number is : %d",sum_fn_ln);
	return 0;
}
