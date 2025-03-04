#include<stdio.h>
#include<math.h>
int main(){
	int factsum=0, count, num;
	printf("Enter any number: ");
	scanf("%d",&num);
	for(count=1; count<=sqrt(num); count++){
		if(num%count==0){
			if(count==num/count){
				factsum+=count;
			}
			else{
				factsum += count+num/count;
			}
		}
	}
	if(factsum==2*num)
		printf("%d is perfect number",num);
		else
		printf("%d is not a perfect number",num);
		return 0;
}
