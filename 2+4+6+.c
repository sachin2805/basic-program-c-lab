#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("enter number upto where u want to do the sum  (Enter the range)= ");
    scanf("%d",&a);

   
    for(i=1;i<=a;i++)
    {
        
        printf("%d + ",2*i);
     
        sum=sum + 2*i;

    }
    printf("the sum is = %d",sum);
    return 0;
}