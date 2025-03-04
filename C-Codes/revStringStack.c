#include<stdio.h>

int top = -1;
char s[100];

void push(char ch){
	s[++top]=ch;

}
char pop()
{
	return s[top--];
}
void main(){
	char Stack[100];
	printf("Enter the string:");
	scanf("%[^\n]",&Stack);
	 int i;
	 for(i=0; Stack[i] != '\0'; i++){
	 	push(Stack[i]);
	 }
	printf("After the reversing:\n");
	for (i=top;i>=0;i--)
	{
		printf("%c",pop());
	}
}
