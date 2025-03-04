#include<stdio.h>

int is_digit(char c){
	 if(c>=48 && c<=57)
	 return 1;
	 else
	 return 0;
} 
void main(){
	char s1[50]; int i = 0;
	printf("Enter any string: ");
	scanf("%[^\n]",s1);
	
	while(s1[i] != '\0'){
		if(is_digit(s1[i]))
		printf("%c is a digit\n",s1[i]);
		else
		printf("%c isn't a digit\n",s1[i]);
		i++;
	} 
}
