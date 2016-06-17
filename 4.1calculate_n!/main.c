#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fac = 1;
    int i,n;
    printf("请输入阶数N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fac *=i;
    }
    printf("%d的阶乘是%d",n,fac);
    return 0;
}
