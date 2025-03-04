#include<stdio.h>
#include<string.h>

void to_lower(char S[]){
	int i = 0;
	while(S[i] != '\0')
	{
		if(S[i] >= 65 && S[i] <= 90){
			S[i] = S[i] + 32;
			
		}
		i++;
	}
}

void main(){
	char S[50];
	printf("Enter string val: ");
	scanf("%[^\n]",S);
	printf("Original string is %s\n",S);
	to_lower(S);
	printf("String in lower case is %s",S);
}
