/*
    本题解法有个不理解的一点是:while第一次循环用scanf输入多个字符；但是在循环中只是判断一个字符，之后的while循环
    再经过scanf的时候不输入，自动读下一个字符，是不是跟scanf（"%c",)中的c有关？？？
    答：以下是个人猜测：
        当程序运行时遇到scanf，程序会去检查shell,看看有没有数据存在shell的缓冲区，如果没有，shell就等待键盘输入，此时
        键盘进行输入，到shell的缓冲区，直到按下回车，scanf由于括号里面是%c,此时从缓冲区读入一个字符到程序，接着程序运行
        下一步，当下个循环又遇到scanf时，程序会去检查shell的缓冲区有无数据，因为第一次输入多个字符，而只读了第一个字符，
        所以这个时候缓冲区还有数据，就不去启动等待键盘的输入，而是直接从缓冲区读入第二个字符，以此类推；
        总结：
            也就是说scanf从shell缓冲区读入数据，读多少，是看scanf（""）中的内容，而第一次键盘输入可以输入多个数据到shell的
            缓冲区，直到按下回车；
    1,本题不是考虑读入整个字符串，而是每次输入一个字符就读一个字符，并记录相关数字，用char ch 记录就好；
        不考虑用 char *ch???
        答：char ch 表示输入的字符，字符可以有很多个；而char *ch 表示ch指向字符串，只有一个；
    2,记录了第一个单词的长度，当遇到空格时如何保存第一个单词的长度，去记录第二个单词的长度？答：其实有个while循环
        每次遇到空格就先printf一个数字，只是程序运行太快，直观上以为printf是一次性输出，其实是一个循环一次输出，
        用debug就能看出端倪
    3,字符是用单引号表示
    4,对多余空格的处理，我选择判断是否cnt是零，如果是continue；（continue很巧妙，仔细体会）
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch= '0';
    int cnt = 0;
    while(ch != '.'){
        scanf("%c",&ch);
        if (ch == '.'){
            printf("%d",cnt);
            break;
        }
        else if (ch != ' '){
            cnt++;
        }
        else {
            if (cnt != 0){
                printf("%d ",cnt);
                cnt = 0;
            }
            else{
                continue;
            }
        }

    }
    return 0;
}