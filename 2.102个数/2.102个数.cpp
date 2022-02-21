#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[8] = { 11,6,4,7,6,4,11,20 };
    int i,first=0,second=0;
    int b[8] = { 0 };
    int c[8] = { 0 };
    int partition =1;

    int res=0;
    for (i = 0; i < 8; i++) {
        res = res ^ a[i];
    }
    printf("res=%d\n", res); //找分割值
    for (i = 0; i < 31; i++) {
        if (res &
            partition) { //按位与
            break;
        }
        partition << 1;   //左移一位
    }
    for (i = 0; i < 8; i++) {//分组
        if (a[i] & partition) {
            first = first ^ a[i];//异或
        }
        else {
            second = second ^ a[i];
        }
    }
    printf("%d %d", first, second);
    return 0;
}

