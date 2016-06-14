#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   srand(time(0));
    int rand_number = rand()%100+1;
    int guess_number = 0;
    int count = 0;

    do
    {
        printf("请输入1~100的数字:");
        scanf("%d",&guess_number);
        if (guess_number>rand_number)
        {
            printf("猜大了！");
        }
        else if (guess_number<rand_number)
        {
            printf("猜小了");
        }
        count++;
    }while(guess_number != rand_number);
    printf("恭喜你就用了%d次就猜中了\n",count);
    return 0;
}
