#include<stdio.h>
int main()
{
        int n,i;
      printf("\n enter the range = ");
    scanf("%d",&n);
    printf("\nNumbers = \n");
    for(i=1;i<=n;i++)
   {
      if(i==3)
       continue;
    printf("%d\t",i);
     }

     printf("\nReverce numbers = \n");
    for(i=n;i>=1;i--)
   {
     if(i==3)
       continue;
     printf("%d\t",i);
   }
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc jump.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe   

 enter the range = 5

Numbers =
1       2       4       5
Reverce numbers =
5       4       2       1
PS F:\PROFOUND\PRACTICAL\c>
*/