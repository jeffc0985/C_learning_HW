//f轉c

#include <stdio.h>

int main()
{
    float f;

    printf("請輸入華氏溫度:");
    scanf("%f",&f);

    f = (f-32)*5/9;

    printf("攝氏溫度為:%.2f",f);

    return 0;
}