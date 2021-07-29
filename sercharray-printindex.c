#include<stdio.h>
int main()
{
    int a[50] ,i,n,b;
    printf("\n enter the number count in array = ");
    scanf("%d",&n);
    
    printf("\nEnter the numbers = \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

     printf("\nEnter the numbers whose u have to find and print the index= \n");
     scanf("%d",&b);
for(i=0;i<n;i++)
{
    if(b==a[i])
    {
        printf("Entered number by user is %d and this located at index is %d",b,i);
    }

}
   
return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc sercharray-printindex.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 enter the number count in array = 10

Enter the numbers = 
11
12
13
14
15
16
17
18
19
20

Enter the numbers whose u have to find and print the index=
18 
Entered number by user is 18 and this located at index is 7
PS F:\PROFOUND\PRACTICAL\c>
*/