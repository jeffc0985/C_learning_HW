#include <stdio.h>

#define AV(x,y) (x+y)/2
int main()
{
    double x, y;
    printf("請輸入x:");
    scanf("%lf",&x);
    
    printf("請輸入y:");
    scanf("%lf",&y);

    printf("%lf,%lf的平均值為:%lf",x,y,AV(x,y));
    return 0;
}