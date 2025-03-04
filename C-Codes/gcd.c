#include<stdio.h>
int main(){
	
		int num1, num2;
		printf("Enter any 2 number: ");
		scanf("%d%d",&num1, &num2);
		
		for(; num1 !=0 && num2 != 0;){
			if(num1>num2)
			num1 = num1 % num2;
			else
			num2=num2%num1;
		}
		if(num1==0)
		printf("%d",num2);
		else
		printf("%d",num1);
		
	
}
