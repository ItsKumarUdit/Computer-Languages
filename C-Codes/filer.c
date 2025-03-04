#include<stdio.h>
int main(){
	FILE *FPtr;
	char S1[100];
	FPtr = fopen("C:\\English (IPE)\\Jai.txt","r");
	fscanf(FPtr, "%[^\n]s",S1);
	fclose(FPtr);
	printf("%s",S1);
	FPtr = NULL;
}
