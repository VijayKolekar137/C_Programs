#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter any charactor: ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\nCharactor is in upper case");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("\nCharactor is in lower case");
	}
	
	return 0;
}
