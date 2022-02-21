#include<stdio.h>
#include <stdlib.h>

//指针的本质 存地址 间接访问
//  &*p和p是等价的    &又叫引用符    *又叫解引用符

int main()
{
    int i=3;//直接访问
   // float f= 20;
    int* p = &i;
   // int* q = &f;   //类型要前后一致 否则编译出错
    printf("i=%d\n", i);//直接访问
    printf("*p=%d\n", *p);//间接访问
   // printf("*q=%f\n", *q);
    return 0;
}

