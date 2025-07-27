#include <stdio.h>

int main()
{
    struct time
    {
        int hour;
        int min;
        double sec;
    }start, end, pass;

    printf("請輸入開始時間:");
    scanf("%d:%d:%lf",&start.hour,&start.min,&start.sec);
    printf("請輸入結束時間:");
    scanf("%d:%d:%lf",&end.hour,&end.min,&end.sec);

    pass.hour = end.hour - start.hour;
    pass.min = end.min - start.min;
    pass.sec = end.sec - start.sec;

    if(pass.sec < 0)
    {
        pass.min -= 1;
        pass.sec += 60.0;
    }

    if(pass.min < 0)
    {
        pass.hour -= 1;
        pass.min += 60; 
    }

    printf("從 %02d:%02d:%04.2lf 到 %02d:%02d:%05.2lf ",start.hour,start.min,start.sec,end.hour,end.min,end.sec);
    printf("經過了 %d小時%d分%.2lf秒",pass.hour,pass.min,pass.sec);
    
    return 0;
}