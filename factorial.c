#include<stdio.h>
int main()
{
    int f=1,n,i;
     printf("\n-------Find factorial------\n");
    printf("\nEnter the number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nThe factorial of given %d number is = %d",n,f);

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc factorial.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe        

-------Find factorial------

Enter the number = 5

The factorial of given 5 number is = 120