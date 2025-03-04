#include<stdio.h>
#include<math.h>
int main(){
	int num, count=0, num1, r, pow_sum=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(num1=num; num1 != 0; num1/=10){
	
		count++;
		
	      for(num1=num; num1 != 0; num1 /= 10){
	      	r = num1 % 10;
		     pow_sum = pow_sum + pow(r,count);
	    }
	    
	}
	if(pow_sum==num)
	printf("Amstrong number");
	else
	printf("Not a Amstrong number");
	
	return 0;
}
