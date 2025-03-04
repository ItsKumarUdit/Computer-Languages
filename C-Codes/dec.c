#include<stdio.h>
int main(){
	int dnum=0, bnum, place=1;
	printf("Enter any binary number: ");
	scanf("%d",&bnum);
	while(bnum != 0){
	
	dnum += bnum % 10 * place;
	bnum /= 10;
	place *= 2;
	
	
}
printf("Dec Num = %d",dnum);
}
