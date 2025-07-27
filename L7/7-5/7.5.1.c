//輸入密碼
#include <stdio.h>

int main()
{
    int i, input, chance = 3;
    int code = 1215;

    
    for (i=1;i<=3;i++)
    {
        printf("請輸入密碼:");
        scanf("%d",&input);
        if(input == code)
        {
            printf("密碼正確!歡迎使用本系統!");
            break;
        }
        else
            {
                chance -= 1;
                if(chance>0)
                    printf("輸入錯誤!剩餘%d次機會\n",chance);
            }
                
    }
    
    if(chance == 0)
        printf("輸入錯誤超過3次!系統已鎖定!");

    return 0;
}