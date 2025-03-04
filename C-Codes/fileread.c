#include<stdio.h>
void main(){
	FILE *FPtr;
	char S1[100];
	
	FPtr = fopen("D:\\Sample\\Sample4.txt","r");
	fscanf(FPtr, "%[^\n]s",&S1);
	
	fclose(FPtr);
	
	printf("%s",S1);
	
	FPtr = NULL;
}
