#include<stdio.h>
#include<math.h>
int main(){
	int num,count,fcount=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(count=1; count<=sqrt(num); count++){
		if(num%count==0){
			if(count==num/count){
				printf("%d ",count );
			}
			else{
				printf(" %d %d ",count,num/count);
			}
			
		}
	}
	
	
}
