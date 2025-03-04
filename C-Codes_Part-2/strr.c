#include<stdio.h>

void main()
{
	int size, i = 0;
	printf("enter size of string ");
	scanf("%d",&size);
	char s[size];
    printf("enter string ");
    scanf("%[^\n]", s);
    while(s[i] != '\0')
    {
    	printf("%s",s[i]);
    	i++;
	}
	
}
