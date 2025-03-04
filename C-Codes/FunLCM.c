#include<stdio.h>

int lcm(int a, int b){
	int count;
	for(count = a>b?a:b; count<=a*b; count=count+(a>b?a:b)){
		if(count%a==0 && count%b==0)
		break;
	}
	return count;
}

void main(){
	int x, y;
	printf("Enter any two numbers ");
	scanf("%d%d",&x,&y);
	
	int R = lcm(x,y);
	printf("Lcm is = %d",R);
}
