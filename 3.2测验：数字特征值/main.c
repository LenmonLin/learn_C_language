#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int input,count=0;
    int sum = 0;
    int temp =0;
    printf("请输入一个非负整数0~1000000:");
    scanf("%d",&input);
    while(input>0){
        temp = input % 10;
        count++;
        if (temp%2 == count%2){
            sum += pow(2,count-1);
        }
        input /= 10;
    }
    printf("数字特征值为:%d",sum);
    return 0;
}
