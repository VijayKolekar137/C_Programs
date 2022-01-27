#include<stdio.h>

int main()
{
	int num=0;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("\nEntered number is Zero.");
	}
	else if(num>0)
	{
		printf("\nEntered number is positive.");
	}
	else
	{
		printf("\nEntered number is negative.");
	}
	
	return 0;
}
