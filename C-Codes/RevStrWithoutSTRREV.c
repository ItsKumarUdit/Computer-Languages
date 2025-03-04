#include<stdio.h>
#include<string.h>
int main(){
	char S1[100];
	printf("Enter any srting: ");
	scanf("%[^\n]",S1);
	int Lenght = strlen(S1);
	int i,j;
	
	for(i=0, j = (Lenght-1); i<j; i++,j--){
		int temp = S1[i];
		S1[i] = S1[j];
		S1[j] = temp;
	}
	printf("Reverse String is %s",S1);
}
