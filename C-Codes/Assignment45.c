#include<stdio.h> 
int main() 
{ 
    int x,y; 
    printf("enter runs of match 1\n:"); 
    scanf("%d",&x); 
    printf("enter runs of match 2\n:"); 
    scanf("%d",&y); 
 
    if (x>y) 
    { 
        printf("max runs were score in match 1\n"); 
    } 
    else if(y>x) 
    { 
        printf("max runs scored were in match 2\n"); 
    } 
}


