#include<stdio.h>
#include <stdlib.h>

void print(int(*p)[4], int row) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < sizeof(*p)/sizeof(int); j++) {
            printf("%3d", *(*(p + i) + j));
        }
    }
}
int main()
{
    int a[3][4] = { 1,3,5,7,2,4,6,8,9,11,13,17,};
    int b[4] = { 1,2,3,4,};
 
    int(*p)[4];//p就是数组指针，指向长度为4的一维整型数组
    p = a;
    print(a, 3);
    return 0;
}

