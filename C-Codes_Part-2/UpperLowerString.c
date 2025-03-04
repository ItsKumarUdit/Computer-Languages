#include<stdio.h>
#include<string.h>
void main(){
	char S[50], i = 0;
	printf("Enter string val: ");
	scanf("%[^\n]",S);
	printf("Original string is %s\n",S);
	while(S[i] != '\0')
	{
		if(S[i] >= 65 && S[i] <= 90){
			S[i] = S[i] + 32;
			
		}
		i++;
	}
	printf("String in lower case is %s",S);
}
