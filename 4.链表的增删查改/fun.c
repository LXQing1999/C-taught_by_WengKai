#include<stdio.h>
#include <stdlib.h>

typedef struct student {//û��ָ���ʱ���������ֿ���ʡ��
    int num;
    struct student* pNext;
}stu, * pstu;

void list_head_insert(pstu*, stu**, int);
void list_tail_insert(pstu*, stu**, int);
void list_print(pstu);