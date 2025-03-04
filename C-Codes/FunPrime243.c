#include<stdio.h>
#include<math.h>

int pm(int a){
	int count = 1,fcount=0;
	for(count = 1; count <= sqrt(a); count++){
		if(a%count==0){
			fcount += 2;
		}
	}
	if(fcount==2){
		return 1;
	}
	else {
		return 0;
	}
}

void main(){
	int num; 
	printf("Enter any number ");
	scanf("%d",&num);
	if(pm(num)){
		printf("Prime number");
	}
	else{
		printf("Not a prime number");
	}
}
