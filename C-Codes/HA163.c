#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	for(; num1 != 0 && num1 != 0;){
		if(num1>num2){
			num1 = num1 % num2;
		}
		else {
			num2 = num2 % num1;
		}
	}
	if(num1==0){
		printf("HCF is = %d", num2);
	}
	else{
		printf("HCF is = %d",num1);
	}
	return 0;
}
