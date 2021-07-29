#include <stdio.h>
int main() {
    
    int a,b,c,d,t;
    
    printf("\nEnter any 4 values = ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
     printf("\nBefore swapping a = %d b = %d c = %d d = %d",a,b,c,d);   
    
    a=a+b+c+d;
    b=a-b-c-d;
    c=a-b-c-d;
    d=a-b-c-d;
    a=a-b-c-d; 
    
  printf("\nAfter swapping a = %d b = %d c = %d d = %d",a,b,c,d);  
    
    return 0;
}