#include<stdio.h>

int main()
{
	int year=0;
	
	printf("Enter the year: ");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf("Year %d is leap year.",year);
	}
	else if(year%100==0)
	{
		printf("Year %d is not a leap year.",year);
	}
	else if(year%4==0)
	{
		printf("Year %d is a leap year.",year);
	}
	else
	{
		printf("Year %d is a not leap year.",year);
	}

	
	return 0;
}
