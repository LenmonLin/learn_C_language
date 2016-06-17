#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i;
    for(j=2;j<=100;j++){
        int isprime = 1;
        for(i=2;i<j;i++){
            if (j%i == 0){
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
            printf("%d ",i);
//        else
//            printf("this number is not a prime\n");
    }
    return 0;
}
