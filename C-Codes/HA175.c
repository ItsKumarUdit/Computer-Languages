#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(i=-num; i<=num; i++){
		printf("%d ",i);
	}
}
