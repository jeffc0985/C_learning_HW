//平行四邊形面積
#include <stdio.h>

int main()
{
    float a, b, area;

    printf("請輸入底:");
    scanf("%f",&a);
    printf("請輸入高:");
    scanf("%f",&b);

    area = a*b;

    printf("面積=%.3f",area);

    return 0;
}