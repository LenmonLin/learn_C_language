#include <stdio.h>
int main()
{
	int a,b,c,input,output;
	printf("please input your three figure:");
	scanf("%d",&input);
	a = input/100;
	b = input/10;
	b %= 10;
	c = input%10;
	output = c*100+b*10+a;
	printf("inverter sequence number is %d",output);
	return 0;
}
