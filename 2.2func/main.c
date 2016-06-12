#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("请输入x的取值:");
    scanf("%d",&x);

    int f = 0;

    if (x<0)
    {
        f = -1;
    }
    else if(x == 0)
    {
        f = 0;
    }
    else  //else 后面不可以写判断条件
    {
        f = 2*x;
    }
    printf("the function value is %d\n",f);
    return 0;
}
