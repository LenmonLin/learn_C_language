#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int input;

    printf("输入一个以2为底的幂整数:");
    scanf("%d",&input);
    int temp = input;
    while(input > 1)
    {
        input /= 2;
        count++;
    }
    printf("log2 of %d is %d",temp,count);
    return 0;
}
