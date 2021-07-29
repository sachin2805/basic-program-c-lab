//PROGRAM 1

/*#include<stdio.h>
int main()
    {
        int i,j,n;
        printf("\n Enter the number = ");
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("  %d",j);
            }
            printf("\n");
        }
    return 0;
    }

/* OUTPUT 1
PS F:\PROFOUND\PRACTICAL\c> gcc 123indecreasingorder.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 Enter the number = 6
  1  2  3  4  5  6
  1  2  3  4  5
  1  2  3  4
  1  2  3
  1  2
  1
  */

//PROGRAM 2

 /*#include<stdio.h>
int main()
    {
        int i,j,n;
        printf("\n Enter the number = ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("  %d",j);
            }
            printf("\n");
        }
    return 0;
    }
/*OUTPUT 2
PS F:\PROFOUND\PRACTICAL\c> gcc 123indecreasingorder.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 Enter the number = 5
  1
  1  2
  1  2  3
  1  2  3  4
  1  2  3  4  5
  */

// PROGRAM 3

 /*#include<stdio.h>
int main()
    {
        int i,j;
        char n,a='A';
        printf("\n Enter the upper char  =  ");
        scanf("%c",&n);
      
         for(i=1;i<=(n-'A'+1);i++)
      
        {
            for(j=1;j<=i;j++)
            {
                printf("  %c", a);
            }
            ++a;
            printf("\n");
        }
    return 0;
    }

 /*OUTPUT 3
 PS F:\PROFOUND\PRACTICAL\c> gcc 123indecreasingorder.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 Enter the upper char  =  E
  A
  B  B
  C  C  C
  D  D  D  D
  E  E  E  E  E
  */

//PROGRAM 4

//  #include<stdio.h>
// int main()
//     {
//         int i,j;
//         char n,a='A';
//         printf("\n Enter the upper char  =  ");
//         scanf("%c",&n);
      
//          for(i=1;i<=(n-'A'+1);i++)
      
//         {
//             for(j=1;j<=i;j++)
//             {
//                 printf("  %c", a +j-i);
//             }
//             ++a;
//             printf("\n");
//         }
//     return 0;
//     }
/*OUTPUT 4
PS F:\PROFOUND\PRACTICAL\c> gcc 123indecreasingorder.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 Enter the upper char  =  E
  A
  A  B
  A  B  C
  A  B  C  D
  A  B  C  D  E
  */

#include<stdio.h>
int main()
    {
        int i,j,n;
        printf("\n Enter the number = ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("  %d",i);
            }
            printf("\n");
        }
    return 0;
    }

/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc 4relatedprogram.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 Enter the number = 5
  1
  2  2
  3  3  3
  4  4  4  4
  5  5  5  5  5
PS F:\PROFOUND\PRACTICAL\c>
*/