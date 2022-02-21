#include<stdio.h>
#include <stdlib.h>

typedef struct student {//没有指针的时候，里面名字可以省略
    int num;
    struct student* pNext;
}stu, * pstu;

void list_head_insert(pstu*, stu**, int);
void list_tail_insert(pstu*, stu**, int);
void list_print(pstu);