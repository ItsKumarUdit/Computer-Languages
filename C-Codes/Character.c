#include<stdio.h>
#include<string.h>

void count(char S[])
{
	int i=0,char_count=0,Num_count=0,Vol_count=0,Con_count=0;
	while(S[i] != '\0'){
		if(S[i] >= 32 && S[i] <= 47 || S[i] >= 58 && S[i] <= 64 || S[i] >= 91 && S[i] <= 96 || S[i] >= 123 && S[i] <= 127){
			char_count++;
		}
		else if(S[i] >= 48 && S[i] <= 57){
			Num_count++;
		}
		 else if(S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U' || S[i] == 'a' ||S[i] == 'e' || S[i] == 'i'|| S[i] == 'o'|| S[i] == 'u'){
			Vol_count++;
		}
		else if(S[i] >= 'a' && S[i] <= 'z' || S[i] >= 'A' && S[i] <= 'Z' ) {
			Con_count++;
		}
		i++;
	}
	printf("\nChar = %d",char_count);
	printf("\nNum = %d",Num_count);
	printf("\nVowel = %d",Vol_count);
	printf("\nConsonant = %d",Con_count);
}

void main(){
	int S[50];
	printf("Enter your string: ");
	scanf("%[^\n]s",&S);
	count(S);
}
