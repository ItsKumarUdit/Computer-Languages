#include<stdio.h>
int main()
{
	char alphabet,position;
	
	printf("Alphabet Positions: ");
	
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++){
	    position = alphabet - 'A' + 1;
		printf("%c: %d\n",alphabet, position);	
	}
	return 0;
}
