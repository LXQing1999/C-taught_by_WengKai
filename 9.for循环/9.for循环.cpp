#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i, total;
    i = 1, total = 0
    for (; total <= 100;i++) {//不能加分号
        if (i % 2 == 1) {//求奇数的和
            continue;// continue跳过本次循环
        }
        total = total + i;
    }
    printf("%d\n", total);
    return 0;
}