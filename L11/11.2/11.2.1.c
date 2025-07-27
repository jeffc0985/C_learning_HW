#include <stdio.h>

int main()
{
    struct date
    {
        int month;
        int day;
    };

    struct data
    {
        char name[20];
        int score;
        struct date BD;
    }stu;
    
    printf("請輸入姓名:");
    scanf("%s",&stu.name);
    printf("請輸入生日(mm/dd):");
    scanf("%d/%d",&stu.BD.month,&stu.BD.day);
    printf("請輸入成績:");
    scanf("%d",&stu.score);

    printf("學生:%s\n生日:%d/%d\n成績:%d\n",stu.name,stu.BD.month,stu.BD.day,stu.score);
    printf("sizeof(stu)=%d",sizeof(stu));   //32 
    return 0;
}