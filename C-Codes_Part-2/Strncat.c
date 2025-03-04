#include<stdio.h>
#include<string.h>

void main(){
	char S1[20] = {"Udit "};
	char S2[20] = {"Raj"};
	
	printf("%s",strncat(S1,S2,2));
}
