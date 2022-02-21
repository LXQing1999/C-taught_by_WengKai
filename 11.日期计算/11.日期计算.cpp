
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int year, mon, day;
    int i, total;
    int a[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    while (scanf_s("%d%d%d", &year, &mon, &day) != EOF) {
        total = 0;
        for (i = 0; i < mon-1; i++) {
            total = total + a[i];
        }
        if (mon > 2) {
            total = total + (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
        }
        total = total + day;
        printf("%04d-%02d-%02d is %dth day\n", year, mon, day,total);
    }
    return 0;
}

