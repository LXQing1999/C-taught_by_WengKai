#include<stdio.h>
#include <stdlib.h>
//当在子函数中需要修改主函数中的值，需要用到二级指针
void print(int *pi,int *pj) {
    pi = pj;
}
int main()
{
    int i = 10;
    int j = 5;
    int* pi = &i;//需要把该变量的地址值传给子函数
    int* pj = &j;
    int** p2;//二级指针存储的是一级指针变量的地址值
    printf("i=%d,j=%d,*pi=%d,*pj=%d\n", i, j, *p, *p);
    change(pi, pj);
    printf("i=%d,j=%d,*pi=%d,*pj=%d\n", i, j, *p, *p);
    return 0;
}

