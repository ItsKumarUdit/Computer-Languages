#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int i, sum = 0, Product=1, Avg=0;
	for(i=1;i<argc; i++){
		Product *= atoi (argv[i]);
		sum += atoi (argv[i]);
	}
	Avg = sum/argc;
	printf("\nProduct is = %d",Product);
	printf("\nSum is = %d",sum);
	printf("\nAvg is = %d",Avg);
}
