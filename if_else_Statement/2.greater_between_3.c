#include<stdio.h>

int main()
{
	int num1=0,num2=0,num3=0;
	
	printf("Enter three number: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1==num2 && num2==num3 && num1==num3)
	{
		printf("\nAll numbers are equal.");
	}
	else if(num1>num2 && num1>num3)
	{
		printf("\nNumber %d is greter than %d and %d",num1,num2,num3);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("\nNumber %d is greter than %d and %d",num2,num1,num3);
	}
	else
	{
		printf("\nNumber %d is greter than %d and %d",num3,num1,num2);
	}
	
	
	
	return 0;
}
