#include <stdio.h>

int main()

{
    struct time
    {
        int hour;
        int min;
        double sec;
    };

    struct date
    {
        int year;
        int month;
        int day;
        struct time now; 
    }today = {2025,7,12,{21,19,23.40}};

    printf("這段程式完成時間為:%02d/%02d/%4d  %d:%d:%.2lf\n"
        ,today.month,today.day,today.year
        ,today.now.hour,today.now.min,today.now.sec);

    printf("sizeof(today)=%d",sizeof(today));   //32非28
    
    return 0;
}