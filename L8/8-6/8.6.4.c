#include <stdio.h>

#define ABS(x) x<0? -x : x
int main()
{
    double x;
    printf("請輸入x:");
    scanf("%lf",&x);

    printf("%lf的絕對值為:%lf",x,ABS(x));
    return 0;
}