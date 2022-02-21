#include"func.h"//链表的增删改差

int main() {
	pstu phead = NULL, ptail = NULL;//定义头尾指针，描述链表   空链表
	int i;
	while (scanf("%d", &i)!=EOF) {  //扫描到空为止
		list_head_insert(phead, ptail, i);  //插入
	}
	list_print(phead);

	return 0;
}