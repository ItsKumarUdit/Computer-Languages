#include<stdio.h>
int main()
{
	int age;
	printf("Enter age : ");
	scanf("%d",&age);
	
	age >= 18 ? printf("can vote") : printf("can't vote");
}
