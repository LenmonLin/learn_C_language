#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,count=1,sum = 0;
    int n=1,m=2;
    scanf("%d %d",&n,&m);
    int j = 2;
    while(count<=m){
        int is_prime = 1; //is_prime = 1 要放while循环内部，否则无法退出循环
        for(i=2;i<j;i++){
            if(j%i == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 1){
            printf("%d ",i);
            if(count>=n){
                sum += i;
            }
            count++; //注意count++不能放在if（count >=n)里面，否则无法count++
        }
        j++;
    }
    printf("sum is =%d\n",sum );
    return 0;
}
