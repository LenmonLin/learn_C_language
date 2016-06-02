#include <stdio.h>
int main()
{
	// initial your data 
	int price = 0;
	int bill = 0;
	printf("please input your price:");
	scanf("%d",&price);
	printf("please input your bill:");
	scanf("%d",&bill);
	printf("your change is %d RMB",price-bill);
	return 0;
}
