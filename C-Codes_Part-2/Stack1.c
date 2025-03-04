#include<stdio.h>
int main(){
	int size=10,Top=-1,nval,sval,found=0,opt=1,i;
	char choice;
	int stack[size];
	do 
	{
	    printf("Enter 1 Push\n2 Pop\n3 Peek\n4 Peep\n5 IsEmpty\n6 IsFull\n7 Display\n");
	    printf("Enter your option\n");
	    scanf("%d",&opt);
	
	     if(opt==1){
		     if(Top==size-1){
		     printf("Stack is full, Push not possible\n");
		    }
		    else{
		     printf("Enter new element: ");
		     scanf("%d",&nval);
		     Top+=1;
		     stack[Top]=nval;
		      printf("Element added successfully\n");
	        }
        }
        else if(opt==2){
  	        if(Top==-1){
  	   	     printf("Stack is empty, Pop not possible\n");
		    }
		     else{
			 Top--;
			 printf("Top element of stack deleted successfully\n");
		}
    }
        else if(opt==3){
    	     if(Top==-1){
  	   	     printf("Stack is empty, Peek not possible\n");
		    }
		     else{
			 printf("Top most element of the stack is %d ",stack[Top]);
		    }
	    }
	    else if(opt==4){
         	if(Top==-1){
  	   	    printf("Stack is empty, Peep not possible\n");
	     	}
		     else{
			 printf("Enter search element: \n");
			 scanf("%d",&sval);
			 for(i=0; i<=Top; i++){
				if(sval==stack[i]){
					found = 1;
					break;
				}
			}
			if(found)
			printf("%d is found in the stack",sval);
			else
			printf("%d is not found in the stack",sval);
		}
		found=0;
	}
	    else if(opt==5){
	     	if(Top==-1){
			printf("Stack is totally empty");
		    }
		    else{
			printf("Stack isn't empty");
		    }
	    }
	    else if(opt==6){
		     if(Top==(size-1))
		     printf("Stack is totally full");
		     else
		     printf("Stack is not full");
	    }
	    else if(opt==7){
		     for(i=Top; i>=0; i--){
			 printf("%d\n",stack[i]);
		    }   
	    }
	    else
		     printf("Invalid option\n");
		     printf("\nPress Y key to continue: ");
		     scanf("%s",&choice);
	    
	}while(choice=='Y' || choice=='y');
}
