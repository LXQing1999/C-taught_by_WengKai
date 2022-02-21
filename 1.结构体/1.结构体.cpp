#include<stdio.h>
#include <stdlib.h>

struct student {
    int num;
    int i;
    char name[20];//这个是字符数组  用的是双引号"  "   输出是%s
    char sex;//单个字符  用的是单引号'  '
    int age;
    float score;
    char addr[30];
};//结构体后面一定要加分号

int main()
{
    struct student s1{1001,"Lilei",'M',18,98.5,"Beijing"};
    struct student sarr[3];
    printf("%d %s %c %d %5.2f %s\n", s1.num,s1.name, s1.sex, s1.age, s1.score, s1.addr);
    for (i = 0; i < 3; i++) {
        scanf("%d%s%c%d%5.2f%s", &sarr[i].num, sarr[i].name, &sarr[i].sex, sarr[i].age, &sarr[i].score, &sarr[i].addr);
    }
    printf("-------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("%d %s %c %d %5.2f %s\n", sarr[i].num, sarr[i].name, sarr[i].sex, sarr[i].age, sarr[i].score, sarr[i].addr);
    }
    return 0;
}

