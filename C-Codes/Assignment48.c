#include <stdio.h>
int main(){
	float distance,time,speed;
	printf("Enter distance in km, time in hour: ");
	scanf("%f%f",&distance, &time);
	speed=distance/time;
	printf("speed is in kmph %f",speed);
}
