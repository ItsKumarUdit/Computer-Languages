#include<stdio.h>
#include<math.h>

void CheckPrime(int num){
	int count, fcount=0;
	for(count = 2; count<=sqrt(num); count++){
		if(num%count==0){
			fcount+=2;
			break;
		}
	}
	if(fcount==0)
	printf("Prime number");
	else
	printf("Not a Prime number");
}



int main(){
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	CheckPrime(num);
}
