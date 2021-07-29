#include<stdio.h>
int main()
{
    int c,i,sum=0,sum1=0,sum2=0;
    printf("enter number upto where u want to do the sum  (Enter the range)= ");
    scanf("%d",&c);

    for(i=1;i<=c;i++)
    {
     
        if(i%2==0)
        {
        printf("%d + ",i);
        sum1=sum1 + i;
        }
        else{
            printf("%d  ",i); 
            printf("- ");
        sum2=sum2 + i;
          
        }
        sum=sum2-sum1;
     }
    printf("the sum is = %d",sum);
    return 0;
}
//OR
/*
#include<stdio.h>
int main()
{
    int c,i,sum=0,sum1=0,sum2=0;
    printf("enter number upto where u want to do the sum  (Enter the range)= ");
    scanf("%d",&c);

    for(i=1;i<=c;i++)
    {
     
        if(i%2==0)
        {
        printf("%d + ",(-i));
        sum1=sum1 + (-i);
        }
        else{
            printf("%d  ",i); 
           
        sum2=sum2 + i;
          
        }
        sum=sum2+sum1;
     }
    printf("the sum is = %d",sum);
    return 0;
}
*/