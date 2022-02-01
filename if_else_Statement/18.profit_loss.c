#include<stdio.h>

int main()
{
	float bprice=0,sprice=0,result=0;
	
	printf("Enter the Buy Price: ");
	scanf("%f",&bprice);
	
	printf("Enter the Sell Price: ");
	scanf("%f",&sprice);
	
	
	if(sprice>bprice)
	{
		result = sprice - bprice;
		printf("\nProfit is %.2f",result);
	}
	else if(bprice>sprice)
	{
		result = bprice - sprice;
		printf("\nLoss is %.2f",result);
	}
	else
	{
		printf("\nNo Profit No Loss");
	}
	
	return 0;
}
