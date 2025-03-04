#include<stdio.h>

int main(int argc, char *argv[]){
	int i;
	printf("Hello World\n");
	for(i=1; i<argc; i++){
		printf("%s\t",argv[i]);
	}
}
