#include<stdio.h>

int main()
{
    int num1=0,num2=0;

    printf("Enter any two number: ");
    scanf("%d%d",&num1,&num2);



    if(num1==num2)
    {
        printf("\nBoth numbers are same.");
    }
    else if(num1>num2)
    {
        printf("\nNumber %d is greater.",num1);
    }
    else
    {
        printf("\nNumber %d is greater.",num2);
    }




	return 0;
}
