#include<stdio.h>

int avg(int sci, int mth, int hin);

int main(){
	int s, m, h;
	printf("Enter marks of Science, maths & Hindi : ");
	scanf("%d%d%d",&s,&m,&h);
	printf("Percentage is %d",avg(s, m, h));
}

int avg(int sci, int mth, int hin){
	return ((sci + mth + hin)/3);
}
