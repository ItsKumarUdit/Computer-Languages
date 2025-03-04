#include<stdio.h>
#include<math.h>
int main(){
	int num, fcount, count, num1, num2;
	printf("Enter any two number: ");
	scanf("%d%d",&num1,&num2);
	
	for(num=num1; num<=num2; num++){
		fcount=0;
		for(count=2; count<=sqrt(num); count++){
			if(num%count==0){
				fcount++;
				break;
			}
		}
		if(fcount==0){
			printf("%d ",num);
		}
	}
}
