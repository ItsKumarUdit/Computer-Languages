#include<stdio.h>
int main(){
	int Marks[6];
	int i;
	Marks[0]=85; Marks[1]=95;
	Marks[2]=75; Marks[3]=90;
	Marks[4]=85; Marks[5]=65;

   for(i=0; i<6; i++){
   	printf("%d ",Marks[i]);
   }
   return 0;
}
