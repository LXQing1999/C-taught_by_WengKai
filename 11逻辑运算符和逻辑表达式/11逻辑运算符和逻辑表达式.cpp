#include<stdio.h>
#include<stdlib.h>

int main() {
	int year;
	while (scanf("%d", &year) != EOF) {
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			//逻辑与的优先级比逻辑或的优先级要高
			printf("%d is leap year\n",year);
		}
	}
	return 0;
}