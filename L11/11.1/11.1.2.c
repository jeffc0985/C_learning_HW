#include <stdio.h>

int main()
{
    struct date
    {
        int year;
        int month;
        int day;
    }holiday = {2004,4,26}, festival;

    printf("請輸入年分:");
    scanf("%d",&festival.year);
    printf("請輸入月:");
    scanf("%d",&festival.month);
    printf("請輸入日:");
    scanf("%d",&festival.day);

    printf("holiday=%02d/%02d/%4d\n",holiday.day,holiday.month,holiday.year); 
    printf("festival=%02d/%02d/%-4d\n",festival.day,festival.month,festival.year);

    
    return 0;
}