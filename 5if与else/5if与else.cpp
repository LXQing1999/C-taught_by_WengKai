#include<stdio.h>
#include<stdlib.h>

int main() {
	int i=10;
	while (scanf_s("%d", i) != EOF) {
		printf("i=%d\n", i);
	}
	return 0;
}