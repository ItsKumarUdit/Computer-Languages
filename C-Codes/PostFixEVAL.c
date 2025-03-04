#include<stdio.h>
#include<math.h>
#include<ctype.h>

int stack[100];
int top = -1;

void push(int operand){
	stack[++top] = operand;
}

int pop(){
	return stack[top--];
}

void main(){
	char exp[100];
	int i, operand1, operand2;
	printf("Enter post-fit exp: ");
	scanf("%s",exp);
	
	for(i=0; exp[i] != '\0'; i++){
		if(isdigit(exp[i]))
		push(exp[i] - '0');
		else
		{
			operand1 = pop();
			operand2 = pop();
			
			switch(exp[i]){
				case '+':
					push(operand2 + operand1);
					break;
				case '-':
					push(operand2 - operand1);
					break;
				case '*':
					push(operand2 * operand1);
					break;
				case '/':
					push(operand2 / operand1);
					break;
				case '^':
					push(operand2 ^ operand1);
					break;
				default : printf("Invalid char");
			}
		}
	}
	if(top != -1)
	printf("%d",pop());
}
