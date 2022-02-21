#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for (i = 0; i < 9; i++) {//外层控制打几行
        for (j = 0; j < abs(4 - i); j++) {
            printf(" ");
        }
        for (j = 0; j < 9 - 2 * abs(4 - i); j++) {//内层控制每一列
            if (j == 0 || j == 8 - 2 * abs(4 - i)) {
                printf("*");
            }
            else {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}