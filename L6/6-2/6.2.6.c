//算工資
#include <stdio.h>

int main()
{
    int hour;
    float wage;

    start:
    printf("請輸入工作時數:");
    scanf("%d",&hour);

    if (hour>=0 && hour<=60)
        wage = hour*75;
    else if (hour>60 && hour<=75)
            wage = ((hour-60)*75*1.25)+(60*75);
        else if (hour>75)
                wage = ((hour-75)*75*1.75)+(15*75*1.25)+(60*75);
            else
                {
                    printf("輸入錯誤,請重新輸入!\n");
                    goto start;
                }

    printf("你的工資為:%.1f元",wage);

    return 0;
}