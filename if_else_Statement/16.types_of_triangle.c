#include<stdio.h>

int main()
{
	int s1=0,s2=0,s3=0;
	
	printf("Three sides of triangel: ");
	scanf("%f%f%f",&s1,&s2,&s3);
	

	if(s1==s2 && s2==s3 && s1==s3)                  	// Condition for equilatral triangle.
	{
		printf("\nTriangle is equilatral triangle");
	}
	else if(s1==s2 || s1==s3 || s2==s3)					// Condition for isosceles triangle.
	{
		printf("\nTriangle is isosceles triangle.");
	}
	else if(s1!=s2 && s2!=s3 && s1!=s3)					// Condition for scalene triangle.
	{
		printf("\nTriangle is scalene.");
	}
	
	return 0;
}
