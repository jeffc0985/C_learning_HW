// 閏年計算
#include <stdio.h>

int main()
{
    int year;
    printf("請輸入西元年分(0~9999):");
    scanf("%d",&year);

    if(year>=0 && year<10000)

        if (year%4000 == 0)
            printf("%d年非閏年",year);
        else if (year%400 == 0)
                printf("%d年是閏年",year);
            else if (year%100 == 0)
                    printf("%d年非閏年",year);
                else if (year%4 == 0)
                        printf("%d年是閏年",year);
                    else
                        printf("%d年非閏年",year);

    else
        printf("輸入錯誤或不在範圍內!");

    return 0;
}