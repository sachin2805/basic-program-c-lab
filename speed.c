#include<stdio.h>
int main()
{
	float s,d,t;
	printf("\n enter the distance in km = ");
	scanf("%f",&d);
	printf("km\n");
	printf("\n enter the time in hour= ");
	scanf("%f",&t);
	printf("hr\n");
	s=d/t;
	
	printf(" the speed of distance %f km and time %f hr is = %f",d,t,s);
	printf("km/hr\n");
	
	return 0;
	
}
