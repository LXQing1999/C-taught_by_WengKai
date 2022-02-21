#include<stdio.h>
#include <stdlib.h>
//二维数组传递必须写列数
void print(int a[][4],int row) {//a和row都是形参
    int i,j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < sizeof(a[0]) / sizeof(int); j++) {   //得到有多少个元素
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][4] = { 1,3,5,7,2,4,6,8,9,11,13,15 };
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    print(a[0], 4);//值传递
    return 0;
}

