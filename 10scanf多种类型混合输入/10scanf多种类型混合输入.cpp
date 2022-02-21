#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float f;
    char c;
    int ret;
    ret = scanf_s("%d %f %c", &i, &f, &c);
    //模式匹配，%c前面要加个空格，否则挨在一起的话，会误以为空格是输入进去的字符（ASCII码32）
    printf("%d %f %c", i, f, c);
    system("pause");
}

