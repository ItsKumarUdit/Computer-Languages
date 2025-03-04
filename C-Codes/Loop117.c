#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("Enter number: ");
	
	
	for(scanf("%d",&n);n !=0;  n = n/10) {
		r = n % 10;
		
		sum = sum + r;
	}
    printf("\nSum of digits of this number = %d",sum);
	return 0;
}
