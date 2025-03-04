#include<stdio.h>
int main()
{
	int Octnum=0, bnum, r, place=1;
	printf("Enter any binary number: ");
	scanf("%d",&Octnum);
	
	while(bnum != 0){
		r=bnum%8;
		Octnum += r*place;
		bnum/=8;
		place*=2;
	}
	printf("Octal number : %d",Octnum);
	return 0;
}
