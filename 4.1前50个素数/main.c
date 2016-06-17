#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j=2,i;
    int count=0;
//    for(j=2;j<=100;j++)
    while (count<=50){
        int isprime = 1;
        for(i=2;i<j;i++){
            if (j%i == 0){
                isprime = 0;
                break;
            }
        }
        if (isprime == 1){
            printf("%d ",i);
            count++;}
        j++;
    }
    return 0;
}
