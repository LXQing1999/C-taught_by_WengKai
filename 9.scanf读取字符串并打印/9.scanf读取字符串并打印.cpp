#include<stdio.h>
#include <stdlib.h>
//标准输入缓冲区原理   fflush(stdin)清空缓冲区    stdin定义的是一个结构体
//版本更新后用rewind也可以清空缓冲区
int main()
{
    char c;
    int ret;
    while (scanf_s("%c", &c) != EOF) {
        printf("%c", c);
    }
    system("pause");
}

