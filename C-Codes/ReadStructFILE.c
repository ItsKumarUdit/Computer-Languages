#include<stdio.h>

int main(){
	FILE *FPtr;
	int N, i, Rno;
	char SName[20];
	FPtr = fopen("D:\\Sample\\Sample6.txt","r");
	printf("Enter N val: ");
	scanf("%d",&N);
	for(i=0; i<N; i++){
		fscanf(FPtr, "%d %s",&Rno, &SName);
		printf("%d %s\n",Rno,SName);
	}
	fclose(FPtr);
	FPtr = NULL;
}
