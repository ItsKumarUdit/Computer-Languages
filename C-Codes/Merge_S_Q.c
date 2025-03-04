#include<stdio.h>

int main(){
	int s1,s2,i,front=-1,rare=-1;
	printf("Enter size of Stack1: ");
	scanf("%d",&s1);
	int stack1[s1];
	printf("\nEnter size of Stack2: ");
	scanf("%d",&s2);
	int stack2[s2];
	int Queue[s1+s2];
	printf("\nEnter %d elements in stack1: ",s1);
	for(i=0; i<s1; i++){
		scanf("%d",&stack1[i]);
	}
	printf("\nEnter %d elements in stack2: ",s2);
	for(i=0; i<s2; i++){
		scanf("%d",&stack2[i]);
	}
	for(i=0; i<s1; i++){
		if(front==-1)
		front++;
		Queue[++rare]=stack1[i];
	}
	for(i=0; i<s2; i++){
		if(front==-1)
		front++;
		Queue[++rare]=stack2[i];
	}
	printf("\nFinal Queue is: ");
	for(i=front; i<=rare; i++){
		printf("%d ",Queue[i]);
	}
}
