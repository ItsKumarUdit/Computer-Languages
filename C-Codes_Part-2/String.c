#include<stdio.h>
#include<string.h>
void main(){
	int S1[50],S2[50],S3[50],S4[50];
	printf("Enter 1st string: ");
	scanf("%[^\n]", S1);
	printf("\nEnter 2nd string: ");
	scanf(" %[^\n]", S2);
	printf("%s\n",S1);
	printf("%s\n",S2);
	strcpy(S3,S2);
	printf("%s\n",S3);
	strcat(S1,S2);
	printf("%s\n",S1);
	strncpy(S4,S1,15);
	printf("%s\n",S4);
	int i = strcmp(S1,S4);
	if(i==0)
	printf("Same");
	else
	printf("Not same\n");
	printf("%d\n",strlen(S1));
	return 0;
}
