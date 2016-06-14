#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uct,bjt,hour_bjt = 0,sec_bjt,hour_uct;
    printf("input beijing time:");
    scanf("%d",&bjt);
    hour_bjt = bjt/100;
    sec_bjt = bjt%100;
    hour_uct = hour_bjt - 8;

    if (hour_uct > 0)
    {
        uct = hour_uct*100+sec_bjt;
    }
    else
    {
        hour_uct +=24;
        uct = hour_uct*100+sec_bjt;
    }
     printf("the uct time is %d",uct);
    return 0;
}
