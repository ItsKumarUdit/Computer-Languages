#include<stdio.h>

void namaste(){
	printf("Namaste");
}
void bongour(){
	printf("Bongour");
}

void main(){
	char ch;
	printf("Enter f for france, i for indian ");
	scanf("%c",&ch);
	
	if(ch=='i'){
		namaste();
	}
	else{
		bongour();
	}
}
