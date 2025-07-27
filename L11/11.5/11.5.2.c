#include <stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
}start, end, pass;

void display(struct time);
int main()
{
    printf("請輸入開始時間:");
    scanf("%d:%d:%d",&start.hour,&start.min,&start.sec);
    printf("請輸入結束時間:");
    scanf("%d:%d:%d",&end.hour,&end.min,&end.sec);

    pass.hour = end.hour - start.hour;
    pass.min = end.min - start.min;
    pass.sec = end.sec - start.sec;

    if(pass.sec < 0)
    {
        pass.sec += 60;
        pass.min -= 1;
    }

    if(pass.min < 60)
    {
        pass.min += 60;
        pass.hour -= 1;
    }

    printf("從 ");
    display(start);
    printf(" 到 ");
    display(end);
    printf(" 經過了 ");
    display(pass);

    return 0;
}

void display(struct time stru)
{
    printf("%02d:%02d:%02d",stru.hour,stru.min,stru.sec);

}