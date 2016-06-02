#include <stdio.h>

int main()
{
	const int AMOUNT = 100;
	int price = 0;
	printf("please input your price ");
	scanf("%d",&price);
	int change = AMOUNT-price;
	printf("your change is %d yuan\n",change);
	return 0;
}


