#include<stdio.h>
int main(){
	int a, b, count;
	printf("Enter any 2 number: ");
	scanf("%d%d",&a,&b);
	
	for(count = a>b?a:b; count<=a*b; count = count+(a>b?a:b)){
		if(count%a==0 && count%b==0)
		break;
	}
	printf("Lcm is = %d",count);
}
