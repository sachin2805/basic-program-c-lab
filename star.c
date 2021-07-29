#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("\n Enter the number of rows = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
                for(k=1;k<=(2*i-1);k++)
                {
                printf("*");
                }
            
            printf("\n");
    }
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc star.c    
PS F:\PROFOUND\PRACTICAL\c> ./a.exe   

 Enter the number of rows = 3
  *
 ***
*****
*/