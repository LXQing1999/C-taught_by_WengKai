#include<stdio.h>
#include <stdlib.h>

typedef struct student {//û��ָ���ʱ���������ֿ���ʡ��
    int num;
    struct student* pNext;
}stu, * pstu;

void list_head_insert(pstu*, stu**, int) { //�����������ǿ��Բ����β�����
    pstu pnew=(pstu)malloc(sizeof(stu);//����ռ�
    pnew->num = i;//��������
    pnew->next = NULL;//������
    if (NULL == *pphead) {//�ж������Ƿ�Ϊ��
        *pphead == pnew;//ͷβָ�붼ָ��ͷ���
        *pptail == pnew;
    }
    else {//�������Ϊ��    
        //��ʾͷ�巨
        pnew->pNext = *pphead;//ԭ�е�ͷ��㸳���½���pnext
        *pphead == pnew;
    }
    list_print(phead);
    return 0;
}

