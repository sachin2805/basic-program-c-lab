#include<stdio.h>
int main()
{
	float f,c;
	printf("enter Fahrenheit temperature = ");
	scanf("%f",&f);
	printf("F");
	
	c=(f-32)*5/9;
	
	printf("degrre celcious temperature is = %f",c);
	
	return 0;
	
}
