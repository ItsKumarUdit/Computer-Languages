#include<stdio.h>
int main()
{
	int a,b,count=0,i;
	printf("Enter first number(a): ");
	scanf("%D",&a);
	printf("Enter second number(b): ");
	scanf("%d",&b);
	
	for(i=a; i<=b; i++){
		if(i%10==7){
			printf("%d ",i);
		    count++;
		
	}
	
	
   }
   printf("\nTotal numbers ended with 7 is %d",count);
   return 0;
}
