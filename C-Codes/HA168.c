#include<stdio.h>
int main()
{
	int num,r,count=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(; num != 0; num /= 10){
		r = num % 10;
		if(r%2!=0){
			count++;
		}
	}
	printf("Total odd digit = %d",count);
	return 0;
}
