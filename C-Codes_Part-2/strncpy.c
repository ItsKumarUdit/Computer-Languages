#include<stdio.h>
#include<string.h>

void main(){
	char S1[20] = {"Udit"};
	char S2[20] = {"Raj"};
	char S3[20] = {};
	
	printf("%s",strncpy(S3,S1,4));
}
