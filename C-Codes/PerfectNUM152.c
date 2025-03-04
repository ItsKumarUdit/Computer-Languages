#include<stdio.h>
#include<math.h>
int main()
{
	int num,count=1,factsum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	
	while(count<=sqrt(num))
	{
		if(num%count==0){
			if(count==num/count){
				factsum+=count;
			}
			else{
			factsum+=count + num/count;
			count++;
		}
		}
	}
	if(factsum==2*num)
		printf("%d is perfect number",num);
		else
		printf("%d is not a perfect number",num);
		return 0;
}
