#include <stdio.h>
#include <string.h>

#define SIZE 5
int main()
{
    struct data
    {
        char name[10];
        int score;
    }stu[SIZE],failed[SIZE];
    
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("請輸入姓名:");
        scanf("%s",(stu+i)->name);
        printf("請輸入成績:");
        scanf("%d",&(stu+i)->score);
    }

    int max = stu->score;
    char max_name[10];
    strcpy(max_name,stu->name);
    double sum = 0;

    int j = 0;
    for(i=0;i<SIZE;i++)
    {
        if((stu+i)->score > max)
        {
            max = (stu+i)->score;
            strcpy(max_name,(stu+i)->name);
        }

        sum += (stu+i)->score;

        if((stu+i)->score < 60)
        {
            *(failed+j) = *(stu+i);
            j++;
        }
    }

    int fail_count = j;

    printf("************output************\n");
    printf("平均為:%.2lf\n",sum/SIZE);
    printf("最高分為:%s %d分\n",max_name,max);
    printf("不及格者有:\n");
    for(i=0;i<fail_count;i++)
        printf("%-10s %d分\n",(failed+i)->name,(failed+i)->score);

    return 0;
}