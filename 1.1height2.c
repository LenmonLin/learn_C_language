#include <stdio.h>
int main()
{
	printf("please input your foot and inch:");
	double foot;
	double inch;
	scanf("%lf %lf",&foot,&inch);
	printf("your height is %f",(foot+inch/12)*0.3048);
	return 0;
}
