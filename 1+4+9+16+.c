#include <stdio.h>

int main() {
   int i,n,sum=0;
   printf("\nEnter the range = ");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
    printf("%d + ",i*i);
    
    sum=sum+i;
    return 0;
}