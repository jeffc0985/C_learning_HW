#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>

#define SIZE 3
int main()
{
    int f1 = open("D:\\C_projects\\progfiles\\student.bin",O_WRONLY|O_BINARY|O_CREAT,S_IWRITE);
    struct data
    {
        char name[10];
        int score;
    }stu[SIZE], stu_rd[SIZE];

    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("請輸入姓名:");
        scanf("%s",(stu+i)->name);
        printf("請輸入分數:");
        scanf("%d",&(stu+i)->score);
    }

    if(f1 != -1)
    {
        write(f1,stu,sizeof(stu));
        close(f1);
    }
    else
        printf("檔案開啟失敗!");

    printf("*******output*******\n");

    f1 = open("D:\\student.bin",O_RDONLY|O_BINARY);

    if(f1 != -1)
    {
        read(f1,stu_rd,sizeof(stu_rd));

        for(i=0;i<SIZE;i++)
        {
            printf("姓名:%s\n",(stu_rd+i)->name);
            printf("成績:%d\n",(stu_rd+i)->score);
        }
        close(f1);
    }
    else
        printf("檔案開啟失敗!");

    return 0;
}