#include<stdio.h>
#include<string.h>
void main(){
	char S1[50] = {"AAAAAAA"};
	char S2[50] = {"AAAAAAA"};
	int i = strcmp(S2,S1);
	if(i==0){
		printf("palindrome");
	}
	else{
		printf("Not a palindrome");
	}
}
