#include<stdio.h>
#include <stdlib.h>
#include <string.h>
char* print_stack() {
    char c[] = "I am print_stack";
    puts c;
    return c;
}
//堆函数存储起始地址
char* p;
p = (char*)malloc(20);
strcpy(p, "I am print_malloc");
puts(p);
int main()
{
    char* p;
    p = print_stack();
    puts(p);
    return 0;
}

