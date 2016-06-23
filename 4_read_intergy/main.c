#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void outNum(int num);
int main()
{
    int x;
    printf("please input your number:");
    scanf("%d",&x);
    int mask=1;
    if (x<0){
        printf("fu ");
        }
    x = abs(x);
    int t = x;
    while(t>9){
        t /= 10;
        mask *= 10;
    }

    do {
        int d = x /mask;
        outNum(d);
        if (mask > 0){
            printf(" ");
        }
        x %= mask;
        mask /= 10;

    }while( mask>0);
    return 0;
}

void outNum (int num){

    switch (num){
    case 0 :printf("ling");break;
    case 1 :printf("yi");break;
    case 2 :printf("er");break;
    case 3 :printf("san");break;
    case 4 :printf("si");break;
    case 5 :printf("wu");break;
    case 6 :printf("liu");break;
    case 7 :printf("qi");break;
    case 8 :printf("ba");break;
    case 9 :printf("jiu");break;

    }

}
