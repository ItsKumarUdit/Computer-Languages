#include<stdio.h>
#include<string.h>
void main(){
	char S1[50], S2[50]={};
	printf("Enter string val: ");
	scanf("%[^\n]",S1);
	strcpy(S2,S1);
	strrev(S2);
	printf("%s\n",S2);
	int i = strcmp(S1,S2);
	if(i==0)
	printf("String is Palindrone");
	else
	printf("String isn't Palindrone");
	
}
