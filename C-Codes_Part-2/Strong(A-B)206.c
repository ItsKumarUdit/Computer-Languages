#include<stdio.h>
#include<math.h>
int main()
{
	int num,count,factsum,num1,num2;
	printf("Enter any two number: ");
	scanf("%d%d",&num1,&num2);
	
	for(num=num1; num<=num2; num++){
	
	factsum=0;
	for(count=1; count<=sqrt(num); count++){
		if(num%count==0){
			if(count==num/count){
				factsum+=count;
			}
			else{
				factsum+=count+num/count;
			}
		}
	}
	if(factsum==2*num)
	printf("%d ",num);
}
	
    return 0;
}
