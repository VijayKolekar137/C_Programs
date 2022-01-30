#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter the any charactor: ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	{
		printf("\nEntered charactor is alphabet");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\nEntered charactor is number");
	}
	else
	{
		printf("\nEntered charactor is special symbol");
	}
	
	return 0;
}
