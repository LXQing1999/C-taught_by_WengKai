#include<stdio.h>
#include <stdlib.h>
void print(char c[]) {   //无反回值调用涵数。它仅仅做输出而不赋值。
    int i = 0;
    while (c[i] != 0) {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    //char c[10] = { '1','2','3','4','5','6','7','8','9' };
    char c[10] = "123456789";//还要给\0留一个位置
    //要加单引号，不然输出的是ASCII对应的字符   
    //数组后要有结束符 \0
    return 0;
}

