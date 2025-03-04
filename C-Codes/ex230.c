#include<stdio.h>
#include<math.h>
int main(){
	int num, num1, digitcount=0, powsum=0, r;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(num1=num; num1 != 0; num1 /= 10){
		digitcount++;
	}
	for(num1=num; num1 != 0; num1 /= 10){
		r=num1%10;
		powsum += pow(r,digitcount);
	}
	if(powsum==num){
		printf("Amstrong number");
		
	}
	else {
		printf("Not a amstrong number");
	}
	return 0;
}
