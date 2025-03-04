#include<stdio.h>
#include<math.h>
int main()
{
	int num, digitcount, r, powsum=0, num1, num2;
	printf("Enter any two number: ");
	scanf("%d %d",&num1, &num2);
	for(num=num2; num>=num1; num /= 10)
	{
		digitcount++;
	}
	
	for(num=num2; num>=num1; num /= 10)
	{
		r=num%10;
		powsum=powsum+pow(r,digitcount);
	}
	if(powsum==num)
	{
		printf("%d\n",num);
	}
	
	return 0;
}

	


