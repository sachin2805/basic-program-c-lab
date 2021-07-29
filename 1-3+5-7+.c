#include<stdio.h>
int main() {
   int i,n,sum=0,c;
   printf("\nEnter the range = ");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
        c=2*i-1;
       if(i%2==0)
       {
    printf("%d + ",-c);
    sum=sum+(-c);
       }
       else{
           printf("%d ",c);
           sum=sum+c;
       }
    
   }
    
    
    printf("\nsum of series = %d",sum);
    
    return 0;
}