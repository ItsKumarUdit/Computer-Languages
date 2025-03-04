#include<stdio.h>
#include<stdlib.h>

struct employee{
	
    int id;
    char name[20], designation[10];
    float salary;
    struct employee *next;
    
}*head,*node,*del_node,*newnode;

void addbegin()
{
    newnode = (struct employee*)malloc(sizeof(struct employee));
    printf("Enter employee data:\n");
    printf("ID \tEmployee name \tDesignation \tSalary: ");
    scanf("%d %s %s %f",&newnode->id,newnode->name,newnode->designation,&newnode->salary);
    if(head==NULL)
    {
    	
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
        printf("Done");
    }
}
void addmiddle()
{
    int n,i;
    newnode= (struct employee*) malloc(sizeof(struct employee));
    printf("Enter employee data:");
    printf("ID\tEmployee name\tDesignation\tSalary: ");
    scanf("%d%s%s%f",&newnode->id,newnode->name,newnode->designation,&newnode->salary);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else
    {
        printf("enter node position: ");
        scanf("%d",&n);
        node=head;
        for(i=1; i<n-1; i++)
        {
            node=node->next;
        }
        newnode->next=node->next;
        node->next=newnode;
    }
}
void addend()
{
    newnode= (struct employee*) malloc(sizeof(struct employee));
    printf("Enter employee data:");
    printf("ID\tEmployee name\tDesignation\tSalary: ");
    scanf("%d%s%s%f",&newnode->id,newnode->name,newnode->designation,&newnode->salary);
    newnode->next = NULL;
    
    if(head==NULL)
    { 
        head=newnode;
    }
    else
    {
        node=head;
        while(node->next!=NULL)
        {
            node=node->next;
        }
        node->next=newnode;
    }

}
void delbegin()
{
    if(head==NULL)
    {
        printf("list is empty deleting not possible");
    }
    else
    {
        del_node=head;
        head = head->next;
        printf("%d employee info ddelted",node->id);
        free(del_node);
        del_node=NULL;
    }
}
void delmiddle()
{
    if(head==NULL)
    {
        printf("list is empty deleting not possible");
    }
    else
    {
        int n,i;
        printf("enter position to be deleted:");
        scanf("%d",&n);
        for(i=1;i<n-1;i++)
        {
            node=node->next;
        }
        del_node=node->next;
        node->next=del_node->next;
        printf("%d employee info is deleted",del_node->id);
        free(del_node);
        del_node=NULL;
    }
}
void delend()
{
    if(head==NULL)
    {
        printf("list is empty deleting not possible");
    }
    else
    {
        node=head;
        while (node != NULL)
        {
            node=node->next;
        }  
        del_node=node->next;
        printf("%d employee info ddelted",del_node->id);
        free(del_node);
        del_node=NULL;
        node->next=NULL;
    }
}
void search()
{
    int Id ,found=0;
    if(head==NULL)
    {
        printf("list is empty,search not possible");
    }
    else
    {
        printf("enter employee id:");
        scanf("%d",&Id);
        node=head;
        while(node!=NULL)
        {
            if(node->id==Id)
            {
                found=1;
                break;
            }
            node=node->next;
        }
    }
    if(found==1)
    {
        printf("%d is found",Id);
    }
    else
    {
        printf("not found");
    }
}
int count()
{
    int count=0;
    if (head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        node=head;
        count=1;
        while (node!=NULL)
        {
            node=node->next;
            count++;
        }
    }
    return count;
}
void findmin()
{
    float min=0;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        node=head;
        min=node->salary;
        while (node!=NULL)
        {
           if(min>node->salary)
           {
            min=node->salary;
           }
           node=node->next;
        } 
    }
    printf("least salary is %.2f",min);
}
void findmax()
{
    float max=0;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        node=head;
        max=node->salary;
        while (node!=NULL)
        {
          if(max<node->salary)
           {
            max=node->salary;
           }
           node=node->next;
        } 
    }
    printf("highest salary is %.2f",max);
}
void findsum()
{
    float sum=0;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        node=head;
        while (node!=NULL)
        {
            sum+=node->salary;
            node=node->next;
        } 
    }
    printf("sum of salaries of all employees is %.2f",sum);
}
void display()
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        node=head;
        while (node != NULL)
        {
            printf("ID: %d\nName: %s\nDesignation: %s\nSalary: %.2f\n",
			node->id,node->name,node->designation,node->salary);
            node=node->next;
        } 
    }
}
int main()
{
    int op;
    char choice;
    do{
        printf("1.addbegin\n2.addmiddle\n3.addend\n4.delbegin\n5.delmiddle\n6.delend\n7.search\n8.count\n9.findmin\n10.findmax\n11.findsum\n12.display");
        printf("\nenter option: ");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
        addbegin();
        break;
        case 2:
        addmiddle();
        break;
        case 3:
        addend();
        break;
        case 4:
        delbegin();
        break;
        case 5:
        delmiddle();
        break;
        case 6:
        delend();
        break;
        case 7:
        search();
        break;
        case 8:
        
        printf("no. of nodes in the list= %d",count());
        break;
        case 9:
        findmin();
        break;
        case 10:
        findmax();
        break;
        case 11:
        findsum();
        break;
        case 12:
        display();
        break;
        default:
        printf("Invalid option");
        break;
        }
    printf("\nEnter Y|y to continue: ");
    scanf("%s",&choice);
  }while(choice=='Y'||choice=='y');
}
