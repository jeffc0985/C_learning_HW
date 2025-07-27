#include <stdio.h>

#define MAX 2
int main()
{
    struct data
    {
        char name[10];
        int score;
    }stu[MAX];

    int i;
    for(i=0;i<MAX;i++)
    {
        printf("請輸入姓名:");
        scanf("%s",(stu+i)->name);
        printf("請輸入成績:");
        scanf("%d",&(stu+i)->score);
    }

    for(i=0;i<MAX;i++)
        printf("%s的成績為:%d\n",(stu+i)->name,(stu+i)->score);
    return 0;
}