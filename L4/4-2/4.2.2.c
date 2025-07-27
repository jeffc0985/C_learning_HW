#include <stdio.h>

int main()
{
    int age;
    char number[10];
    char fname[10], name[10];

    printf("請輸入資料:\n");
    printf("姓:");
    scanf("%s",fname);
    getchar();

    printf("名:");
    scanf("%s",name);
    getchar();

    printf("年齡:");
    scanf("%d",&age);
    getchar();

    printf("學號:");
    scanf("%s",number);

    printf("請確認資料:\n姓:%s\n名:%s\n年齡:%d\n學號:%s",fname,name,age,number);


    
    return 0;
}