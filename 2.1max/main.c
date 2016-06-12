#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("请输入两个正整数：");
    scanf("%d %d",&a,&b);

    int max = b;
    if (a>b)
    {
        max = a;
    }
    printf("两个数的最大值是%d\n",max);
    return 0;
}
