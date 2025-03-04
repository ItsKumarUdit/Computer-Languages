#include<stdio.h>
#include<math.h>
int main(){
	int count, num, factsum=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(count=1; count<=sqrt(num); count++){
		if(num%count==0){
			if(count==num/count){
				factsum += count;
			}
			else{
				factsum += count + num/count;
			}
		}
	}
	printf("Sum of factors is %d",factsum);
}
