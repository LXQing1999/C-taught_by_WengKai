
#include<stdio.h>
#include <stdlib.h>

//标准输入缓冲区原理   fflush(stdin)清空缓冲区    stdin定义的是一个结构体
//版本更新后用rewind也可以清空缓冲区
int main()
{
    int i;
    int ret;
    while (fflush(stdin), (ret = scanf_s("%d", &i)) != EOF) {
        printf("i=%d\n", i);
    }
    system("pause");
}


