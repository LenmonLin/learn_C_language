#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    int result;
    int min;
    printf("please input two number:");
    scanf("%d %d",&a,&b);
    min = a>b?b:a;
    for (i=1;i<=min;i++){
        if (a%i == 0 && b%i ==0){
            result = i;
        }
    }
    printf("the gcd is %d",result);
    return 0;
}
