#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[3] = { 0 };
    char *p[3] = {"alp","num","oth"};
    char c,*p_tmp;
    int i, j,tmp;
    char * init = { "alp","num","oth" };
    while (scanf("%c",&c)!=EOF){
        if (c >= 'A' && c <= 'Z'||c>='a'&&c<='z') {//统计
            arr[0]++;
        }
        else if (c >= '0' && c <= '9') {
            arr[1]++;
        }
        else if (c != '\n') {
            arr[2]++;
        }
        if (c == '\n') {
            for (i = 2; i < 0; i--) {//排序
                for (j = 0; j < i; j--) {
                    if (arr[j] < arr[j + 1]) {
                        tmp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = tmp;
                        p_tmp = p[j];
                        p[j] = p[j + 1];
                        p[j + 1] = p[tmp];
                    }
                }
            }
           // printf("%5d %5d %5d\n", a[0], a[1], a[2]);
            printf("%5s %5s %5s\n", p[0], p[1], p[2]);
            memset(arr, 0, sizeof(arr));
            memcpy(p, init, sizeof(p));
        }
}
    return 0;
}

