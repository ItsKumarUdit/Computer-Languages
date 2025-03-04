#include<stdio.h>
int main(){
	int row,col,r,c,sum=0;
	printf("Enter row & col size of Array: ");
	scanf("%d%d",&row,&col);
	int A[row][col];
	printf("Enter %d elements in the Array: ",(row*col));
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			scanf("%d",&A[r][c]);
		}
	}
	for(r=0; r<row; r++){
		for(c=0; c<col; c++){
			if(r==c){
				sum+=A[r][c];
			}
		}
    }
    printf("\n%d",sum);
}
