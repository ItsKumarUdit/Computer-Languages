#include<stdio.h>
int main()
{
	int n,count=0,sum=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	for(; n!=0; count++ ){
		n = n/10;
		
		sum+=count;
	}
	 printf("Digits=%d",count);
	 printf("\nSum=%d",sum);
	return 0;
}
