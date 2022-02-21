#include<stdio.h>
#include <stdlib.h>
#define N 5

void print(int *p) {
    int i;
    for (i = 0; i < N; i++) {
        printf("%3d", p[i]);
    }
}
int main()
{
    int a[N] = { 1,2,3,4,5 };
    int* p;
    int i;
    print(a);
    p = &a[4];
    p = a;//a里面存的类型是整型指针的值，而不是变量a的类型
    
    printf("\n");
    return 0;
}

