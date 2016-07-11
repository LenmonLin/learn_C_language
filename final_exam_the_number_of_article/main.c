/*
    1,如何判断输入结束？区分段落与文章结束？
    答：用while（ch != EOF) { ch =getchar()}就是在windows 下输入ctrl +z+回车才能结束;
    2,间隔是回车怎么表示?
    答：\r
    3,getchar函数的用法？
    答：getchar 与scanf 函数不同，getchar()直接用就可以，括号内不用填任何参数
    4，注意#2处代码，或、与 两个逻辑的不同与区别，不要用混了；

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch= '0';
    int cnt = 0;
    int a[11]={0};
    while( ch != EOF){  //#1当用scanf("%d",&ch)时，ch != EOF 根本没有反应？？
        ch=getchar();
        if (ch == EOF){
            int i ;
            for (i = 0;i<11;i++){
                printf("%d ",a[i]);
            }
            break;
        }
        else if (ch!=' '&&ch!='\t'&&ch!='\n'&&ch!='\r'&&ch!=','&&ch!='.'&&ch!='?'&&
                 ch!='('&&ch!=')'&&ch!='\"'&&ch!=':'){//#2为什么空格的时候无法正常运行至else? 答 把&&用成||
            cnt++;
        }
        else {
            if (cnt != 0){
                if(cnt>0 && cnt <11){
                    a[cnt] += 1;
                }
                cnt = 0;
                a[0]++; //a[0]用来记录单词总数
            }
            else{
                continue;
            }
        }

    }
    return 0;
}
