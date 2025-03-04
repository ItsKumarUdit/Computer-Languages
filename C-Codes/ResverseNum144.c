#include<stdio.h>
void main()
{
	int num, Rnum=0, num1, R;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for (num1=num; num>0; num1=num1/10)
	{
		R = num1 % 10;
		Rnum = (Rnum*10)+R;
	}
	printf("Reverse is: %d",Rnum);
}
