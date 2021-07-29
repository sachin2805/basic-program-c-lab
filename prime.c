#include<stdio.h>
int main()
{
    int a,i;
    printf("enter any one number = ");
    scanf("%d",&a);

    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
        printf("\ngiven number %d is not prime number",a);
        break;
        }
    }
    if(i==a)
    printf("\ngiven number %d is prime number",a);
    else
    printf("\ngiven %d neither prime nor coprime ",a);

    return 0;
}