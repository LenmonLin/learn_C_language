#include <stdio.h>
#include <stdlib.h>

int main()
{
    int odd_count = 0,even_count = -1,all_count = -1;
    int number = 0;
    printf("请输入0~100000的正整数:");

    while(number != -1)
    {

        if (number%2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        all_count++;
        scanf("%d",&number);
    }
    printf("总个数为：%d,奇数个数为：%d,偶数个数为：%d",all_count,odd_count,even_count);
    return 0;
}
