#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t;
    printf("please input two numbers:");
    scanf("%d %d",&a,&b);
    int origa =a ;
    int origb =b ;

    while(b != 0){
        t = a % b;
        a = b;
        b = t;
    }
    printf("%d 和 %d 的最大公约数是:%d ",origa,origb,a);
    return 0;
}
