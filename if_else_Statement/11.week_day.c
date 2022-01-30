#include<stdio.h>

int main()
{
	int num=0;
	
	printf("Enter number from 1 to 7: ");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("\nMonday");
	}
	else if(num==2)
	{
		printf("\nTuesday");
	}
	else if(num==3)
	{
		printf("\nWednesday");
	}
	else if(num==4)
	{
		printf("\nThursday");
	}
	else if(num==5)
	{
		printf("\nFriday");
	}
	else if(num==6)
	{
		printf("\nSaturaday");
	}
	else if(num==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("\nInvalid Input !!!");
	}
	
	return 0;
}
