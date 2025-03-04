#include<stdio.h>
#include<string.h>
void countletter(char S[]){
	int i = 0, Count=0, Num=0, Alpha=0;
	while(S[i] != '\0'){
		if(S[i]>=32 && S[i]<=47 || S[i]>=58 && S[i]<=64 || S[i]>=91 && S[i]<= 96)
		Count++;
		else if(S[i]>=48 && S[i]<=57)
		Num++;
		else if(S[i]>=65 && S[i]<=90 || S[i]>=97 && S[i]<=122)
		Alpha++;
		i++;
	}
	printf("\nTotal character = %d",Count);
	printf("\nTotal number = %d",Num);
	printf("\nTotal alphabets = %d",Alpha);
}

int main(){
	int S[50];
	printf("Enter your string: ");
	scanf("%[^\n]",S);
	countletter(S);
}
