#include"func.h"//�������ɾ�Ĳ�

int main() {
	pstu phead = NULL, ptail = NULL;//����ͷβָ�룬��������   ������
	int i;
	while (scanf("%d", &i)!=EOF) {  //ɨ�赽��Ϊֹ
		list_head_insert(phead, ptail, i);  //����
	}
	list_print(phead);

	return 0;
}