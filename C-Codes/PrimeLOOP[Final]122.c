#include<math.h>
#include<stdio.h>
int main()
{
	int num, count, fcount=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for (count =2; count <= sqrt(num); count++)
	{
		if(num%count==0){
			fcount+=2;
			break;
		}
	}
	if(fcount==0)
	{
		printf("It's a Prime number");
	}
	else
	{
		printf("Not a Prime number");
	}
	return 0;
}
