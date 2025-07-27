//英里轉公里
#include <stdio.h>

int main()
{
    float mile,km;

    printf("請輸入英里:");
    scanf("%f",&mile);

    km = mile*1.6;

    printf("%.3f英里=%.3f公里",mile,km);

    return 0;
}