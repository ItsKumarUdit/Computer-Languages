#include<stdio.h>
int main()
{
	int i=0,num;
	printf("Enter number: ");
	scanf("%d",&num);
	
	for(; num != 0; i++){
		num = num / 10;
	}
	printf("digits=%d",i);
	return 0;
}
