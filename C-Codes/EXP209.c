#include<stdio.h>
int main(){
	int rows, row, col;
	printf("Enter number rows: ");
	scanf("%d",&rows);
	
	for(row=1; row<=rows; row++){
		for(col=1; col<=rows; col++){
			if(row+col>=2*row){
				printf("%d",col);
				
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

