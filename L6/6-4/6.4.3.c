#include <stdio.h>

int main()
{
    int input;
    printf("請輸入1~7之間的整數:");
    scanf("%d",&input);

    switch(input)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("今天要上班");
            break;
        case 6:
        case 7:
            printf("今天休息");
            break;
        default:
            printf("輸入錯誤");
            
    }

    return 0;
}