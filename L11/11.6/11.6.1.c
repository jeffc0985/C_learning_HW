#include <stdio.h>

int main()
{
    enum color
    {
        RED = 114-32,
        red = 114,
        GREEN = 103-32,
        green = 103,
        BLUE = 98-32,
        blue = 98
    }shirt;

    printf("請輸入顏色(r,g,b):");
    scanf("%c",&shirt);

    switch (shirt)
    {
        case red :
        case RED :
            printf("你選擇了紅色"); 
            break;
        case green :
        case GREEN :
            printf("你選擇了綠色"); 
            break;
        case blue :
        case BLUE :
            printf("你選擇了藍色"); 
            break;
        default:
            printf("輸入錯誤!");
            break;
    }
    
    return 0;
}