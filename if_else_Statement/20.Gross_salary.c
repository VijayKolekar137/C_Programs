#include<stdio.h>

int main()
{
	float b_salary = 0,HRA=0,DA=0,g_salary=0;

	printf("Enter your basic salary: ");
	scanf("%f",&b_salary);

	if(b_salary>0)
	{
		if(b_salary>0 && b_salary<=10000)
		{
			HRA = b_salary * 0.20;
			printf("\nHRA = %.2f",HRA);

			DA = b_salary * 0.80;
			printf("\nDA = %.2f",DA);

		}
		else if(b_salary>10000 && b_salary<=20000)
		{
			HRA = b_salary * 0.25;
			printf("\nHRA = %.2f",HRA);

			DA = b_salary * 0.90;
			printf("\nDA = %.2f",DA);
		}
		else if(b_salary>20000)
		{
			HRA = b_salary * 0.30;
			printf("\nHRA = %.2f",HRA);

			DA = b_salary * 0.95;
			printf("\nDA = %.2f",DA);
		}

		g_salary = b_salary + HRA + DA;

		printf("\n\nGross Salary is %.2f",g_salary);

	}
	else
	{
		printf("Invalid Salary.....Please Enter Valid Salary...!!!");
	}

	return 0;

}
