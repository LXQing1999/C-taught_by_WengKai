#include<stdio.h>
#include <stdlib.h>

struct student {
    int num;
    char name[20];
    char sex;
};//定义结构体
int main()
{
    struct student s = { 1001,"Hulu",'M' };
    struct student sarr[3]={1001,"Zhangsan",'M',1002,"Lisi",'M',1003,"wangwu",'M' }
    struct student *p;
    int num;
    p = &s;
    printf("%d %s %c\n", p->num, p->name, (*p).sex);//两种解引用的方式是一样的
    p=sarr
    return 0;
}

