#include<stdio.h>
int main()
{
	int a;
	printf("enter the any number = ");
	scanf("%d",&a);
	
	if(a==0)
	{
	printf("\ngiven number %d is zero or neutral\n ",a);
	}
	else if(a%2==0)
	{
	printf("\ngiven number %d is even number\n ",a);
	}
	else
	{
	printf("\ngiven number %d is odd number \n ",a);
	}

	return 0;
	
}

