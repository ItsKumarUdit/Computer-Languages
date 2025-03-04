#include<stdio.h>
int main()
{
	int n;
	printf("Enter table number: ");
	scanf("%d",&n);
	
	int table;
	int i=1;
	while(i<=10){
		printf("\n%d",n*i);
		i++;
	}
	
}
