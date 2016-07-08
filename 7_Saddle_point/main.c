#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size][size];
    int i,j;
    int flag = 0;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<size;i++){
        int max = 0;
        int j;
        for (j=0;j<size;j++){
            if (arr[i][max]<arr[i][j]){
            max = j;
            }
        }
        int min=0;
        for (j=0;j<size;j++){ //注意这里的j变量是本地变量，j 可以用在第一坐标
            if (arr[j][max]<arr[min][max]){
                min =j;
            }
        }
        if (i == min){
            flag = 1;
            printf("%d %d",min,max);
        }
    }
    if (flag == 0){
        printf("NO\n");
    }

    return 0;
}
