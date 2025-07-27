#include <stdio.h>

int main()
{
    int input;
    printf("請輸入1~4其中一個數:");
    scanf("%c",&input);

    switch(input)
    {
        case '1':
            printf("春天");
            break;
        case '2':
            printf("夏天");
            break;
        case '3':
            printf("秋天");
            break;
        case '4':
            printf("冬天");
            break;
        default:
            printf("輸入錯誤!");
    }
        
    return 0;
}