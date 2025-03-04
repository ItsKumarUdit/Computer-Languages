#include<stdio.h>
#include<string.h>
void main()
{
	char S1[50], S2[50], S3[50], S4[50];
	printf("Enter 1st string val: ");
	scanf("%[^\n]", S1);
	printf("Enter 2nd string val: ");
	scanf(" %[^\n]", S2);
	printf("%s\n",S1);
	printf("%s\n",S2);
	strcpy(S3,S2);
	printf("%s\n",S3);
	strcat(S1,S2);
	printf("%s\n",S1);
	strncpy(S4,S1,16);
	printf("%s\n",S4);
	
	int i = strcmp(S1,S4);
	if(i==0)
	printf("Both S1 & S4 are same\n");
	else
	printf("Both S1 & S4 aren't same\n");
	
	printf("%d \n",strlen(S1));
	printf("%d \n",strlen(S2));
	printf("%d \n",strlen(S3));
	printf("%d \n",strlen(S4));
	
}
