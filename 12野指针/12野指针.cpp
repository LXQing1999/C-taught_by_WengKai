#include<stdio.h>
#include <stdlib.h>
//野指针是free以后的空间没有赋null
int main()
{
    int* p;
    p = (int*)malloc(4);
    *p = 1;
    free(p);
    return 0;
}

