#include<stdio.h>
#include<math.h>
int main(){
	int num, factsum=0, r, count;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(count=1; count<=sqrt(num); count++){
		if(num%count==0)
		if(count==num/count){
			factsum+=count;
		}
		else{
			factsum+=count+num/count;
		}
	}
	if(factsum==2*num){
		printf("Perfect number");
	}
	else{
		printf("Not a Perfect number");
	}
	return 0;
}
