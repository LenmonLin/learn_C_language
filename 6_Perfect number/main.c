#include <stdio.h>
#include <stdlib.h>

int isPerfectNumber(int number);
int main()
{
    int i,temp;
    int k,l;
    scanf("%d %d",&k,&l);
    for (i=k;i<l;i++){
        temp =isPerfectNumber(i);
        if (temp){
            printf("%d ",temp);
        }
    }
    return 0;
}

int isPerfectNumber(int number)
{
    int i;
    int sum=0;
    for(i=1;i<number;i++){
        if (number % i == 0){
            sum += i;
        }
    }
    if (sum == number){
        return number;
    }
    else {
        return 0;
    }
}


