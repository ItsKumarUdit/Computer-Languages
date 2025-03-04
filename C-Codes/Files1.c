#include<stdio.h>
void main()
{
	FILE *FPtr;
	char S1[100];
	printf("Enter Any String ");
	scanf("%[^\n]s",&S1);
	FPtr=fopen("D:\\Sample\\Sample2.txt","w");
	fprintf(FPtr,"%s",S1);
	fclose(FPtr);
	printf("Data is Written in to the File");
	FPtr=NULL;
	
}
