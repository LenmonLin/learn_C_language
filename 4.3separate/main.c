#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("please input your number:");
    scanf("%d",&x);
    int mask=1;
    int t = x;
    while(t>9){
        t /= 10;
        mask *= 10;
    }

    do {
        int d = x /mask;
        printf("%d",d);
        if (mask > 0){
            printf(" ");
        }
        x %= mask;
        mask /= 10;

    }while( mask>0);
    return 0;
}
