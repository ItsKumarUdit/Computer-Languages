#include<stdio.h>
#include<math.h>

void main(){
	int num, num1, R, PowSum=0, digitCount=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(num1=num; num1 != 0; num1/=10){
		digitCount++;
	}
	for(num1=num; num1 != 0; num1 /= 10){
		R = num1%10;
		PowSum=PowSum+pow(R,digitCount);
	}
	if(PowSum==num)
	printf("%d is an Armstrong number",num);
	else
	printf("%d not an Armstrong number",num);
}
