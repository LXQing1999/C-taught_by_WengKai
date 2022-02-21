#include<stdio.h>
#include<stdlib.h>
#include<string.h>
size_t mystrlen(char c[]) {
    int i = 0;
    while (c[i]) {
        i++;
    }
    return i;
}
//gets 已经消除\n
int main()
{
    char c[20];
    while (gets(c) {
        puts(c);
        printf("str_len=%d\n", strlen(c));
    }
    return 0;
}

