#include<stdio.h>

int main(){
	char s1[50]; int i = 0;
	printf("Enter any string: ");
	scanf("%[^\n]",&s1);
	printf("Original string is %s\n",s1);
	while(s1[i] != '\0'){
		if(i==0){
			if(s1[i]>=97 && s1[i]<=122)
			s1[i] -= 32;
		}
		if(s1[i] == 32){
			if(s1[i+1]>=97 && s1[i+1]<=122){
				s1[i+1] -= 32;
			}
		}
		i++;
	}
	printf("String in camel case is %s\n",s1);
	return 0;
}

