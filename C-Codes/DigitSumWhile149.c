#include<stdio.h>
int main()
{
	int n,r,digitsum=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	while(n != 0){
		r=n%10;
		digitsum+=r;
		n=n/10;
	}
	printf("sum of the digit of the number is : %d",digitsum);
	
	return 0;
}
