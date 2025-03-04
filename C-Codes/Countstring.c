#include<stdio.h>

void main(){
	char S[50], i = 1, count = 1;
	printf("Enter your string: ");
	scanf("%[^\n]s",&S);
	while(S[i] != '\0'){
		count++;
		i++;
	}
	printf("Count is %d",count);
}
