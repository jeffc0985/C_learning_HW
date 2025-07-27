#include <stdio.h>

int main()
{
    int input;
    start:
        printf("請輸入1~4其中一個數:");
        scanf("%d",&input);

        switch(input)
        {
            case 1:
                printf("春天");
                break;
            case 2:
                printf("夏天");
                break;
            case 3:
                printf("秋天");
                break;
            case 4:
                printf("冬天");
                break;
            default:
                printf("輸入錯誤!\n");
                goto start;
        }
            
    return 0;
}
//輸入非整數會進入迴圈