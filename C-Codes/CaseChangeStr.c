#include<stdio.h>
#include<string.h>
void Case_change(char S[]){
	int i = 0;
	while(S[i] != '\0'){
		if(S[i] >= 97 && S[i] <= 122){
			S[i] = S[i] - 32;
		}
		i++;
	}
}

int main(){
	int S[50];
	printf("Enter your string: ");
	scanf("%[^\n]",S);
	printf("String before changing case: %s\n",S);
	Case_change(S);
	printf("String before changing case: %s",S);
}
