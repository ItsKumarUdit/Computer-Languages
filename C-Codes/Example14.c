#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,total_score,strike_rate;
	printf("enter number of sixes,fours,threes,doubles,ones and balls");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	total_score=6*a+4*b+3*c+2*d+e;
	strike_rate=(float)(6*a+4*b+3*c+2*d+e)/f*100;
	printf("total_score is %d\n",total_score);
	printf("strike_rate is %d",strike_rate);
}
