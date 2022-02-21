#include<stdio.h>
#include <stdlib.h>

int main()
{
    char* p="Hello";
    char c[10] = "hello";
    c[0] = "H";
    printf("p=%s\n", p);
    printf("c=%s\n", p);

    return 0;
}

