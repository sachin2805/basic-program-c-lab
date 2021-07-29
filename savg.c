#include<stdio.h>
int main()
{
	double n1,n2,n3,n4,n5,avg;
	printf("Enter any five number = ");
	scanf("%lf%lf%lf%lf%lf",&n1,&n2,&n3,&n4,&n5);
	
	avg=(n1+n2+n3+n4+n5)/5;
	printf("\n avg of given number is = %lf",avg);
	
	return 0;

}	
	
