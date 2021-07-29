#include<stdio.h>
int main()
{
	int s,c;
	
		printf("\nEnter your cost price = ");
	scanf("%d",&c);
	
	printf("u r the student \n if u r student then write 0 other wise 1 = ");
	scanf("%d",&s);
	
	
	
	if(c>=500 && s==0)
	{
		printf("u got the 10%% discount on the price of %d \n",c);
		
	}
	else if(c<=500 && s==0)
	{
		printf("u got the 5%% discount on cost price of %d \n",c);
		
	}
	
		
		
		if(c>=500 && s!=0)
	{
		printf("u got the 8%% discount on the price of %d \n",c);
		
	}
		else if(c<=500 && s!=0)
	{
		printf("u got the 2%% discount on cost price of %d \n",c);
		
	}
	
	return 0;
	
}
