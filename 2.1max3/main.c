#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("请输入三个数：");
    scanf("%d %d %d",&a,&b,&c);

    int max = 0;
    if (a>b)
    {
        if (a>c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if(b>c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("最大数是:%d",max);
    return 0;
}