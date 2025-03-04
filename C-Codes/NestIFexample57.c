#include<stdio.h>
int main()
{
	int num,even,odd;
	printf("Enter any number : ");
	scanf("%d",&num);
	if(num%2==0)
	{
	  printf("even");
	  if(num%2==0)
	  printf("\ndivisible by 4");
	  else
	  printf("\nNot divisible by 4");
    }
    else
    printf("odd");
     if(num%5==0)
     printf("\ndivisible by 5");
     else
     printf("\nNot divisible by 5");
}




