#include<stdio.h>
#include<math.h>
int main()
{
	int num,count=2,fcount=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	while(count <= sqrt(num)){
		if(num%count==0)
		fcount+=2;
		count++;
		break;
	}
	if(fcount==0)
	printf("Prime Number");
	else
	printf("Not a Prime Number");
	return 0;
	
}
