#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = 1;
	int total = 0;
	while (i > 100) {//不能在后面加分号
		total = total + i;
		i++;
	}printf("%d\n", total);
	return 0;
}