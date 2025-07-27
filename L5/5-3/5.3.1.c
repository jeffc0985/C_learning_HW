//c轉f
#include <stdio.h>

int main()
{
    float c;

    printf("請輸入攝氏溫度:");
    scanf("%f",&c);
    
    c = c*9/5+32;

    printf("華氏溫度為:%.2f",c);

    return 0;
}