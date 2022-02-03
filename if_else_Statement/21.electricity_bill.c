#include<stdio.h>

int main()
{
	int units = 0,charge=0;
	
	printf("Enter the Electricity unit: ");
	scanf("%d",&units);
	
	if(units>0)
	{
		if(units>0 && units<=50)
		{
			charge = units * 0.5;
			charge += charge * 0.2;
			printf("\nFinal Bill: %d",charge);
		}
		else if(units>50 && units<=150)
		{
			charge = units * 0.75;
			charge += charge * 0.2;
			printf("\nFinal Bill: %d",charge);
		
		}
		else if(units>150 && units<=250)
		{
			charge = units * 1.20;
			charge += charge * 0.2;
			printf("\nFinal Bill: %d",charge);
		}
		else if(units>250)
		{
			charge = units * 1.50;
			charge += charge * 0.2;
			printf("\nFinal Bill: %d",charge);
		}
	}
	else
	{
		printf("\nInvalid Units...Please Enter Valid Unit.");
	}
	
	return 0;
}
