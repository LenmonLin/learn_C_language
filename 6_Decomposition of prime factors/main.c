#include <stdio.h>
#include <stdlib.h>
int minPrime(int number);
int main()
{
    int n;
    scanf("%d",&n);
    while(1){
        int num = minPrime(n);
        if (num != n ){
        printf("%dx",num);
        }
        else{
            printf("%d",num);
            break;
        }
        n /= num;

    }


    return 0;
}
int minPrime(int number)
{
    int i;
    for(i=2;i<number;i++){
        if (number%i == 0){
            break;
        }
    }
    return i;
}
