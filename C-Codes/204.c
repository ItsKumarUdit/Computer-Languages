#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, i, count, fcount;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	for(i = a<b?a:b; i = a>b?a:b; i++){
		fcount=0;
		for(count=1; count<=sqrt(i); count++){
			if(i%count == 0){
				fcount+=2;
			}
		}
		if(fcount==2){
			printf("%d",i);
		}
	}
}
