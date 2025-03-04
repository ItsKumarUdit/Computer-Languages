#include<stdio.h>
#include<string.h>
void main(){
	char S1[50] = {"RAJ"};
	char *ptr = &S1;
	printf("Reverse string is %s",strrev(ptr));
}
