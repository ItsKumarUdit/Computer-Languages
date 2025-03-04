#include <stdio.h>

int main()
{
    int row, col, rows=4;
     
    for(row=0; row<rows; row++){
    	for(col=0; col<rows; col++){
    		if(row==0 || row==rows-1 || col==0 || col==rows-1){
			
    		printf("* ");
    	}
    		else{
    			
			
		    printf("  ");
		}
		}
		printf("\n");
	}
}

