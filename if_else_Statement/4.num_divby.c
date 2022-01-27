#include<stdio.h>

int main()
{
	int num=0;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	
	if(num == 0)
	{
		printf("Number is neutral.\n");
	}
	else
	{
			if(num>=1)
			{
				printf("Number is positive.");
		
				if(num%5==0 && num%9==0)
				{
					printf(" And divisible by 5 and 9\n");
				}
				else
				{
					printf(" But it is not divisible by 5 and 9.\n");
				}
			}
			else
			{
				printf("Number is negative.\n");
			}
	}
	return 0;
}
