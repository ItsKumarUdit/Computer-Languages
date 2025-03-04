#include<stdio.h>
int main()
{
	int num,num1,sum=0,r,count,fvalue;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(num1=num; num1!=0; num1/=10){
		r=num1%10;
		fvalue=1;
		
		for(count = 1; count<=r; count++){
			fvalue=fvalue*count;
		}
		sum += fvalue;
	}
	if(sum==num){
		printf("Number is a Strong number");
	}
	else
	{
		printf("Not a Strong number");
	}
}
