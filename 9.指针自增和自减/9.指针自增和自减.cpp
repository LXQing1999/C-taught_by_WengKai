#include<stdio.h>
#include <stdlib.h>

//分两步，第一步：去掉++
//后一步怎么结合要看优先级
int main()
{
    int a[3] = { 2,7,8 };
    int* p;
    int j;
    p = a;
    j = *p++;//  j=*p;   p=p+1;
    printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);//2,2,7
    j = p[0]++;
    printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);
    return 0;
}

