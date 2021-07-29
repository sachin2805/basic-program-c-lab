#include<stdio.h>
int main()
{
    int c,s,a,b;
    printf("\n____________menue____________\n");
    printf("\n 1. Find the square and cube of given number ");
    printf("\n 2. Find given year is leap year or not ");
    printf("\n\nEnter the choice = ");
    scanf("%d",&c);

    if(c==1) //logic for square nd cube
    {
        printf("\nEnter the any number = ");
        scanf("%d",&s);
                  a=s*s;
                b=a*s;
             printf("\the square of the given %d number is = %d and cube is = %d ",s,a,b); 
    }
    else if(c==2) //logic for leap year
    {
        printf("\nEnter the any year = ");
        scanf("%d",&s);
        if(s%4==0)
        {
            printf("\n Givn year %d is leap year ",s);
        }
        else 
        {
           printf("\n Givn year %d is not leap year ",s);    
        }
    }
    else
    printf("\n User enter wrong choice.");
    return 0;
    
}