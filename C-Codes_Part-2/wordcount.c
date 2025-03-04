#include<stdio.h>

void main(){
	char S1[100];
	int words=1,i;
	printf("Enter your sentences: ");
	scanf("%[^\n]s",S1);
	while(S1[i] != '\0'){
		if(S1[i]==32){
			words++;
		}
		i++;
	}
	printf("Total words = %d",words);
}
