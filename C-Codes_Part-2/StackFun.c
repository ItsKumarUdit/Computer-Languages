#include<stdio.h>
int size=10;
int top = -1;
int stack[10];
int R;
int isempty(){
	if(top==-1)
	return 1;
	else
	return 0;
}
int isfull(){
	if(top==size-1)
	return 1;
	else
	return 0;
}
void Push(int element){
	top+=1;
	stack[top]=element;
	printf("Element added sucessfully");
}
void Pop(){
	printf("%d element deleleted sucessfully",stack[top]);
	top--;
}
int Peek(){
	return stack[top];
}
int Peep(int sval){
	int i,found=0;
	for(i=0; i<=top; i++){
		if(stack[i]==sval)
		found = 1;
		break;
	}
	return found;
}
void Display(){
	int i;
	for(i=top; i>=0; i--){
		printf("%d\n",stack[i]);
	}
}

 void main(){
 	int opt,i,nval,sval;
 	char choice;
 	
 	do
	{
 		printf("Enter 1 Push\n2 Pop\n3 Peek\n4 Peep\n5 IsEmpty\n6 IsFull\n7 Display\n");
	    printf("Enter your option\n");
	    scanf("%d",&opt);
	    
	    switch(opt){
		     case 1 : 
		     if(isfull())
		     printf("Stack is full, Push not  possible");
		     else
		     printf("Enter new element: ");
		     scanf("%d",&nval);
		     Push(nval);
		     break;
		
		     case 2 :
			if(isempty())
			printf("Stack is already empty");
			else
			Pop();
			break;
			
		    case 3 :
		     if(isempty())
			 printf("Stack is empty, Peek not possible");
			 else
			 R = Peek();
			 printf("\nTop most element is %d ",R);
			 break;
			 
		case 4 : 
		     if(isempty())
		     printf("Stack is empty, Peep not possible");
		     else 
		     printf("\nEnter search value: ");
		     scanf("%d",&sval);
		     Peep(sval);
		     if(Peep(sval)) 
		     printf("Element found");
		     else 
		     printf("Element not found");
		     break;
		
		case 5 :
			if(isempty())
			printf("Stack is empty");
			else 
			printf("Stack is not empty");
			break;
			
		case 6 :
			if(isfull())
			printf("Stack is full");
			else 
			printf("Stack is not full");
			break;
			
		case 7 :
			if(isempty())
			printf("Stack is empty");
			else 
	        Display();
		default :
		printf("Invalid option");
	
     }
		printf("\nPress Y key to continue: ");
		scanf("%s",&choice);	
	
	
    } while(choice=='Y' || choice=='y');
 }

