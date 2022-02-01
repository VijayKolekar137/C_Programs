#include<stdio.h>

int main()
{
	int s1=0,s2=0,s3=0,s4=0,s5=0,total=0;
	float per=0;
	
	printf("\n\t******************************* Grade Of Student **************************************\n\n\n");
	
	printf("Enter the marks of five subject out of 100(Per Subject). : ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	
	if(s1<0 || s1>100 || s2<0 || s2>100 || s3<0 || s3>100 || s4<0 || s4>100 || s5<0 || s5>100 )
	{
		printf("Invalid Marks !!!\n");
		main();
	}
	else
	{
		
		total = s1+s2+s3+s4+s5;
	
		per = (total/5);
	
		printf("\nPercentage is %.2f.\n",per);
	
		getch();
	
		if(per<40)
		{
			printf("Fail !!!!");
		}
		else if(per>=40 && per<60)
		{
			printf("You got %.2f percent and got 'E' grade.",per);
		}
		else if(per>=60 && per<70)
		{
			printf("You got %.2f percent and got 'D' grade.",per);
		}
		else if(per>=70 && per<80)
		{
			printf("You got %.2f percent and got 'C' grade.",per);
		}
		else if(per>=80 && per<90)
		{
			printf("You got %.2f percent and got 'B' grade.",per);
		}
		else 
		{
			printf("You got %.2f percent and got 'A' grade.",per);	
		}
	
	}  
	
	
	
	return 0;
}
