#include <stdio.h>
#include <stdlib.h>
//任意位数的逆向
int main()
{
    int input ;
    int result = 0;
    printf("请输入要进行逆向的数:");
    scanf("%d",&input);
    int digit = 0;
    while(input>0)
    {
        digit = input % 10;
        //700输出007；printf("%d",digit);
        result = result*10+digit;
        input /=10;
    }
    printf("the reverse digit is %d",result);
    return 0;
}
