#include<stdio.h>

int main()
{
	int a1=0,a2=0,a3=0,result=0;

	printf("Enter the three angle of triangle: ");
	scanf("%d%d%d",&a1,&a2,&a3);

	result = a1+a2+a3;

	if(result==180 && a1>0 && a2>0 && a3>0)
	{
		printf("\nThe triangle is valid");
	}
	else
	{
		printf("\nThe triangle is not valid");
	}

	return 0;
}
