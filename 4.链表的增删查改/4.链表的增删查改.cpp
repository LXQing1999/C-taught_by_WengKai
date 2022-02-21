#include<stdio.h>
#include <stdlib.h>

typedef struct student {//没有指针的时候，里面名字可以省略
    int num;
    struct student *pNext;
}stu,*pstu;
//头插法和尾插法   有序插入
int main()
{
    pstu, phead=NULL, ptail=NULL;//定义头尾指针描述链表
    int i;
    while (scanf("%d", &i) != EOF) {

    }
    return 0;
}

