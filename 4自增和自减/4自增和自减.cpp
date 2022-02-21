#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = -1;
	int j;
	j = i++ > -1;//直接分成两步，j>-1  i++
	printf("i=%d,j=%d", i, j);
	j = !++i;//同级的运算符应从左到右计算
	printf("i=%d,j=%d", i, j);
	return 0;
}