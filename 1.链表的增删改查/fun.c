#include "func.h"
//ͷ�巨
void list_head_insert(pstu* pphead, stu** pptail, int i) {
}
void list_tail_insert(pstu* pphead, stu** pptail, int i) {
}
void list_sort_insert(pstu* pphead, stu** pptail, int i) {
	pstu pnew = (pstu)calloc(1, sizeof(stu));//����
	pnew->num = i;
}
//�����ӡ

void list_print(pstu phead) {
	while (phead) {
		printf("%3d", phead->num);
		phead = phead->pNext;
	}
	printf("\n");
}
void list_sort_insert(pstu* pphead.pstu* pptail, int i) {
	pstu pnew = (pstu)calloc(1, sizeof(stu));
	pnew->num = i;
	if (NULL == *pphead) {//�ж������Ƿ�Ϊ��

	}
}
