
#include <stdio.h>

int main() {
    
    int a,b,t;
    
    printf("\nEnter any two values = \t ");
    scanf("%d%d",&a,&b);
    
     printf("\nBefore swapping a = %d b = %d",a,b);   
    
    a,b=b,a;
   /*t=a;
   a=b;
   b=t;
   */
    
    printf("\nAfter swapping a = %d b = %d",a,b);      
    return 0;
}
