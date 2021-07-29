#include<stdio.h>
int main()
{
    float a,b,x;
    int c;
    printf("\nEnter any two number = ");
    scanf("%f%f",&a,&b);
    printf("\n-------Menu------\n");
    printf("\n1.Addition \n2.Substrction \n3.Division \n4.Multiplication");
    printf("\nEnter the choice = ");
    scanf("%d",&c);

    switch (c)
    {
        case 1: x=a+b;
        printf("the addition of given %f and %f is %f",a,b,x);
        break;
        case 2: x=a-b;
        printf("the addition of given %f and %f is %f",a,b,x);
        break;
        case 3: x=a/b;
        printf("the addition of given %f and %f is %f",a,b,x);
        break;
        case 4: x=a*b;
        printf("the addition of given %f and %f is %f",a,b,x);
        break;
        default :
        printf("\n Entered choice is wrong ");
    }
   
    return 0;
}