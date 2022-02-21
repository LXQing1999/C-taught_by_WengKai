#include<stdio.h>
#include <stdlib.h>
//脏数据  linux原有的数据
//一旦申请就一直存在，除非free
//内存释放时，要使用malloc使用的地址，不能偏移

int main()
{
    int i;
    char* p;
    scanf("%d", &i);//申请多少空间
    p = (char*)malloc(i);  //申请多少个字节
    strcpy(p, "hello");
    puts(p);
    free(p);//释放空间
    return 0;
}

