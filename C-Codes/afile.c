#include<stdio.h>

void main(){
	FILE *FPtr;
	int i=0;
	char S[100];
	printf("Enter your string: ");
	scanf("%[^\n]s",&S);
	FPtr = fopen("D:\\Sample\\Sample7.txt","a");
	while(S[i] != '\0'){
		fputc(S[i],FPtr);
		i++;
	}
	fclose(FPtr);
	printf("Done");
	FPtr = NULL;
}
