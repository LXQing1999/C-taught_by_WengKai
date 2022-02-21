#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j;
	int k;
	int ret;
	//while (scanf_s("%d%d%d", &i, &j,&k)!=EOF) {
	//	ret = i > j ? (i > k ? i : k) : (j > k ? j : k);//输出较大的那个数
	//	printf("ret=%d\n", ret);
	//}
	ret = (5, 6, 7);//逗号表达式的值是最后一个数的值  ret=7
	//ret = 5, 6, 7;    ret=5
	printf("ret=%d\n", ret);
	return 0;
}