#include<stdio.h>

int main()
{
	int num=0;
	
	printf("Enter the number of month: ");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("Days in January is 31");
	}
	else if(num==2)
	{
		printf("Days in February is 28");
	}
	else if(num==3)
	{
		printf("Days in March is 31");
	}
	else if(num==4)
	{
		printf("Days in April is 30");
	}
	else if(num==5)
	{
		printf("Days in May is 31");
	}
	else if(num==6)
	{
		printf("Days in June is 30");
	}
	else if(num==7)
	{
		printf("Days in July is 31");
	}
	else if(num==8)
	{
		printf("Days in August is 31");
	}
	else if(num==9)
	{
		printf("Days in September is 30");
	}
	else if(num==10)
	{
		printf("Days in Octomber is 30");
	}
	else if(num==11)
	{
		printf("Days in Novermber is 30");
	}
	else if(num==12)
	{
		printf("Days in December is 31");
	}
	else
	{
		printf("Invalid Input !!!");
	}
	
	return 0;
}
