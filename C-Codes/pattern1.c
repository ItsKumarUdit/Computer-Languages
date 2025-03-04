#include<stdio.h>
int main(){
	int row, col, x, j;
	printf("Enter X val: ");
	scanf("%d",&x);
	for(row = 1, j = 'A'; row<=x; row++, j+=1){
		for(col=1; col<=x; col++){
			
			printf("%c ",j);
			
		}
		printf("\n");
	}
}
