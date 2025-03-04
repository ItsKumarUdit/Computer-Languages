#include<math.h>
#include<stdio.h>
int main()
{
	int num, count, fcount=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for (count =1; count <= sqrt(num); count++)
	{
		if(num%count==0){
			fcount+=2;
		}
	}
	if(fcount==2)
	{
		printf("It's a Prime number");
	}
	else
	{
		printf("Not a Prime number");
	}
	return 0;
}
