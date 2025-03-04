#include<stdio.h>

int gcdu90(int a, int b){
	for(; a != 0 && b != 0;){
		if(a>b){
			a = a % b;
		}
		else{
			b = b % a;
		}
	}
	if(a==0){
		return b;
	}
	else{
		return a;
	}
}

void main(){
	int x, y;
    printf("Enter any two numbers ");
    scanf("%d%d",&x,&y);
    int R = gcd(x,y);
    printf("Gcd is %d",R);
}
