#include<stdio.h>

int main()
{
	char alpha;
	
	printf("Enter the any character: ");
	scanf("%c",&alpha);
	
	if((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z') )
	{
		printf("\nCharacter is alphabet.");
	}
	else
	{
		printf("Character is not alphabet.");
	}
	
	return 0;
}
