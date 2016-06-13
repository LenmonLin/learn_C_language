#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0 ;
    int count = 0;
    int number;

    printf("请输入需要求和的加数，除了-1之外：");
    scanf("%d",&number);

    while(number != -1)
    {
        sum +=number;
        count++;
        printf("请输入需要求和的加数，除了-1之外：");
        scanf("%d",&number);
    }

    printf("the average is %f",1.0*sum/count);
    return 0;
}
