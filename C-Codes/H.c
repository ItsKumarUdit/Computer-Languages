#include<stdio.h>
#include<stdlib.h>
#define s 5
int a[s]={NULL};
void insert()
{
  int val,j,i,k;
  printf("Enter a value: ");
  scanf("%d",&val);
  k=val%s;
  for(i=0;i<s;i++)
  {
    j-(k+i)%s;
    if(a[j]==NULL)
    {
      a[j]=val;
      break;
    }
  }
  if(i==s)
  printf("Elements cannot be inserted");
}
void display()
{
  int i;
  printf("The elements ");
  for(i=0;i<s;i++)
  printf("\nAt index %d\t value=%d\n",i,a[i]);
}
void main()
{
  int ch,i;
  while(1)
  {
    printf("\n1-Insert\n2-Display\n3-Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        insert();
        break;
      case 2:
        display();
        break;
      case 3:
        exit(0);
    }
  }
}
