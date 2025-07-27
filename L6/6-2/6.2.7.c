// 季節判斷
#include <stdio.h>

int main()
{
    int month;
    printf("請輸入月份:");
    scanf("%d",&month);

    if (month == 3 || month == 4 || month == 5)
        printf("為春季");
    else if (month == 6 || month == 7 || month == 8)
            printf("為夏季");
        else if (month == 9 || month == 10 || month == 11)
                printf("為秋季");
            else if (month == 12 || month == 1 || month == 2)
                    printf("為冬季");
                else
                    printf("輸入錯誤!");

    return 0;
}