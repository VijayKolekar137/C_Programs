#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter the charactor: ");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <='Z' || ch >= 'a' && ch <= 'z')
	{
		if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
		{
			printf("Entered alphabet is vowel");
		}
		else
		{
			printf("Entered alphabet is consonant");
		}
	}
	else
	{
		printf("\nEnter charactor is not alphabet");
	}
	
	return 0;
}
