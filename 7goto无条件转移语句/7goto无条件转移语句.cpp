#include<stdio.h>
#include<stdlib.h>

//不能跳转到其他函数
void print(){
label:
    printf("I am print fun\n");
}
int main() {
	int i;
	int total = 0;
label:
	total = total + i;
	i++;
	if (i <= 100) {
		goto label;
	}
	if (i > 5) {
		goto error;
	}
error:
    printf("system is error\n");
	printf("total=%d\n", total);
	return 0;
}