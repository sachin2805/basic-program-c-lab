#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the percentage of the student = ");
    scanf("%d",&a);

    if(a>=70)
    {
    printf("Student got the 'A' gread");
    }
    else if(a>=60 && a<70)
    {
    printf("Student got the 'B' gread");
    }
    else if(a>=45 && a<60)
    {
    printf("Student got the 'c' gread");
    }
 else 
    {
    printf("Student is FAIL");
    }
    return 0;

}