#include<stdio.h>

int is_uc(char c){
	 if(c>=65 && c<=90)
	 return 1;
	 else
	 return 0;
} 
void main(){
	char s1[50]; int i = 0;
	printf("Enter any string: ");
	scanf("%[^\n]",s1);
	
	while(s1[i] != '\0'){
		if(is_uc(s1[i]))
		printf("%c is in upper case\n",s1[i]);
		else
		printf("%c isn't in upper case\n",s1[i]);
		i++;
	} 
}
