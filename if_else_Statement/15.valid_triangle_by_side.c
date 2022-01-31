#include<stdio.h>

int main()
{
	float s1=0,s2=0,s3=0;
	
	printf("Enter the three sides of triangel: ");
	scanf("%f%f%f",&s1,&s2,&s3);
	
	if(s1+s2>s3)
	{
		if(s2+s3>s1)
		{
			if(s1+s3>s2)
			{
				printf("\nTriangle is valid.");
			}
			else
			{
				printf("\nTriangle is not valid.");
			}
		}
		else
		{
			printf("\nTriangle is not valid.");
		}
	}
	else
	{
		printf("\nTrinagle is not valid");
	}
	
	return 0;
}
