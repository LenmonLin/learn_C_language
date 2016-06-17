#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int isprime = 1;
    printf("请输入需要判断的数:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if (n%i == 0){
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
        printf("this number is prime\n");
    else
        printf("this number is not a prime\n");

    return 0;
}
