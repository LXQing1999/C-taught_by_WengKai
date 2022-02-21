#include<stdio.h>
#include <stdlib.h>

typedef struct student {//没有指针的时候，里面名字可以省略
    int num;
    struct student* pNext;
}stu, * pstu;

void list_head_insert(pstu*, stu**, int) { //函数的声明是可以不放形参名的
    pstu pnew=(pstu)malloc(sizeof(stu);//申请空间
    pnew->num = i;//继续工作
    pnew->next = NULL;//空链表
    if (NULL == *pphead) {//判断链表是否为空
        *pphead == pnew;//头尾指针都指向头结点
        *pptail == pnew;
    }
    else {//如果链表不为空    
        //演示头插法
        pnew->pNext = *pphead;//原有的头结点赋给新结点的pnext
        *pphead == pnew;
    }
    list_print(phead);
    return 0;
}

