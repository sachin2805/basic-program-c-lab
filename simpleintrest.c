#include<stdio.h>
int main()
{
    int p,r,t,SI;
    printf("enter the principle = ");
    scanf("%d",&p);
      printf("enter the rate of intrest = ");
    scanf("%d",&r);
      printf("enter the time period = ");
    scanf("%d",&t);

    SI=(p*r*t)/100;
     printf("The simple intrest of given data is = %d ",SI);

     return 0;
}