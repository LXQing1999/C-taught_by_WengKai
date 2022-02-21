#include<stdio.h>
#include <stdlib.h>
//一个函数的函数栈是1M
//访问越界
#define N 5

void print(int a[]; int len;) {//形参 int a[]在这儿类似一个指针（翁凯也讲过的）
    int i;
    for (i = 0; i < len; i++) {
        printf("a[%d]=%d\n", i, a[i]);
    }
}
int main()
{
    int i = 10;
    int a[N] = { 1,2,3,4,5};//[]里必须是常量值，不能放变量   初始化
    print(a, N);//实参   值传递   
    printf("i=%d\n", n);
    return 0;
}

