#include "func.h"
//头插法
void list_head_insert(pstu* pphead, stu** pptail, int i) {
}
void list_tail_insert(pstu* pphead, stu** pptail, int i) {
}
void list_sort_insert(pstu* pphead, stu** pptail, int i) {
	pstu pnew = (pstu)calloc(1, sizeof(stu));//申请
	pnew->num = i;
}
//链表打印

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
	if (NULL == *pphead) {//判断链表是否为空

	}
}
