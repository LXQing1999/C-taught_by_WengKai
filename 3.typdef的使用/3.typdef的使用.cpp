#include<stdio.h>
#include <stdlib.h>

//define是在预编译的时候开始编译的
//typedef 是在编译的时候开始替换的，实现过程不一样
typedef struct student {
    int num;
    char name[20];
    char sex;
}stu,*pstu;
//pstu==struct student*
//#define INTERGE int 
//typedef int  size_t;//代码即注释
int main()
{
    stu s = {1001,"Hulu",'M'};
    pstu p;
    size_t i;
    p = &s;
    printf("%d %s %c\n", p->num, p->name, p->sex);
    return 0;
}

