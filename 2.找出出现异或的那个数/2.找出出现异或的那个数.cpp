#include <stdio.h>
#include<stdlib.h>
#define N 5

int main()
{
    int a[5]{ 1,2,3,2,1 };
    int result = 0;
    int i;
    for (i = 0; i < N; i++) {
        result = result ^ a[i];
    }
    printf("result=%d\n", result);
    return 0;
}
