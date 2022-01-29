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
			if(num%2==0)
			{
				printf("%d is even.\n",num);
			}
			else
			{
				printf("%d is odd.\n",num);
			}
	}
	

	
	return 0;
}
