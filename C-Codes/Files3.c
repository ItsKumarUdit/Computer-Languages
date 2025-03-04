#include<stdio.h>
void main(){
	FILE *FPtr;
	char S1[100];
	printf("Enter your First string: ");
	scanf("%[^\n]s",&S1);
	
	FPtr = fopen("D:\\Sample\\Sample4.txt","w");
	fprintf(FPtr,"%s",S1);
	fclose(FPtr);
	printf("File is created");
	FPtr = NULL;
}
