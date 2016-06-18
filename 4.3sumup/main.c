#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    double sum = 0.0;
    int sign = 1;
    printf("please input final number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum += 1.0*sign/i;
        sign = -sign;
    }
    printf("the sum of reciprocals is :%lf",sum);
    return 0;
}
