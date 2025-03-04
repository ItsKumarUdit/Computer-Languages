#include<stdio.h>
#include<string.h>

void main(){
	char S1[20] = {"Udit"};
	char S2[20] = {"rwaj"};
	int i = strcmp(S1,S2);
	if(i==0){
		printf("Same");
	}
	else if(i>0) {
		printf("first string val high");
	}
	else{
		printf("First string val is low");
	}
}
