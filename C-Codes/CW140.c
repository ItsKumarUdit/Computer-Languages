#include<stdio.h>
#include<math.h>
int main()
{
	int i,num;
	printf("Enter any number: ");
	scanf("%d",&num);
	printf("Factors of %d are: ",num);
	
	for(i=1; i<=sqrt(num); i++){
		if(num%i==0){
		   if(i==num/i){
		   	printf("%d ",i);
		   }
		   else
		   {
		   	printf("%d %d ",i, num/i);
		   }
		}
		
    }
	return 0;
}
