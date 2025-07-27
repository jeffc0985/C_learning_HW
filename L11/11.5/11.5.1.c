#include <stdio.h>

struct data
{
    char name[10];
    int score;
}stu;
void add5(struct data*);

int main()
{
    printf("請輸入姓名:");
    scanf("%s",stu.name);
    printf("請輸入成績:");
    scanf("%d",&stu.score);

    add5(&stu);

    printf("呼叫add5()後,成績為:%d",stu.score);

    return 0;
}

void add5(struct data* stu)
{
    stu->score += 5;
}