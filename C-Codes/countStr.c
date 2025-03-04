#include<stdio.h>
#include<string.h>

void main(){
	char S[50];
	int count = 0, i = 0;
	printf("Enter your string: ");
	scanf("%[^\n]",S);
	while(S[i] != '\0'){
		count++;
	i++;
	}
	printf("Count = %d",count);
}
