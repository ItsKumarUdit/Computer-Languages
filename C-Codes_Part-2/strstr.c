#include<stdio.h>
#include<string.h>

void main(){
	char S1[50] = {"King Kohli"};
	char S2[50] = {};
	printf("Enter your string: ");
	scanf("%[^\n]",&S2);
	
	int i = strstr(S1,S2);
	
	if(i)
	printf("String found");
	else
	printf("Not found");
}
