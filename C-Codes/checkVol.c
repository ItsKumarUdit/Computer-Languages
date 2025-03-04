#include<stdio.h>
int main(){
	char Alpha;
	printf("Enter any Alphabets: ");
	scanf("%s",&Alpha);
	
	if(Alpha=='a'|| Alpha=='e' || Alpha=='i' || Alpha=='o' || Alpha=='u' ||
	 Alpha=='A' || Alpha=='E' || Alpha=='I' || Alpha=='O' || Alpha=='U')
	printf("Vowel");
	else
	printf("Consonant");
}
