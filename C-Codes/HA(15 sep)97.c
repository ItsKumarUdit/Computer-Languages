#include<stdio.h>
int main()
{
	char games;
	printf("Choose among them C(Cricket), V(Volleyball, S(Shuttlecock), B(Badminton, & F(Football): ");
	scanf("%c",&games);
	
	switch(games)
	{
		case 'C' : printf("Go for Cricket");
		break;
		case 'V' : printf("Go for Volleyball");
		break;
		case 'S' : printf("Go for Shuttlecock");
		break;
		case 'B' : printf("Go for Badminton");
		break;
		case 'F' : printf("Go for Football");
		break;
		default : printf("Not available");
	}
	return 0;
}
